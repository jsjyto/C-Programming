#include <stdio.h>
#include <string.h>
#include <stdlib.h>



typedef struct STATION // STATION�̶�� ����ü�� ����
{
	char name[20];
	struct STATION *next;
	struct STATION *prev;		
}station; // typedef���� �ٲ� �̸� 

// int *p = (int*)malloc(sizeof(int)) // �����Ҵ� ������ 

station *first; // ��߿� ���� 
station *last; // ������ ���� 
station *add; // ���� �߰��ϴ� ���� ����
 
void init() // ��߿��� ������ �ʱ�ȭ �Լ� 
{
	
	first = (station*)malloc(sizeof(station)); //��߿� �޸� �Ҵ�
	last = (station*)malloc(sizeof(station)); // ������ �޸� �Ҵ� 
	
	
	first->next = last; // ��߿��� �������� ���������� ���� 
	last->prev = first; // �������� �������� ��߿����� ���� 
	first->prev = NULL; // ��߿��� �������� �����Ƿ� NULL 
	last->next = NULL;  // �������� �������� �����Ƿ� NULL 
	strcpy(first->name,"��߿�");
	strcpy(last->name,"������");
	
}

void add_station(station *add) // ���� �߰��ϴ� �Լ� 
{
	
	add = (station*)malloc(sizeof(station)); //�߰��� �� �޸� �Ҵ�
	
	printf("�߰��� ���� �Է��ϼ��� : ");
	scanf("%s",add->name);
	
	// �������� ����Ű�� �������� �������� �߰��ϴ� ������ ���� 
	last->prev->next = add; 
	// �߰��Ǵ� ���� �������� �������� ���������� ���� 
	add->prev = last->prev;
	
	add->next = last; // �߰��Ǵ� ���� �������� ���������� ���� 
	last->prev = add; // �������� �������� �߰��Ǵ� ������ ���� 
}

void del_station(char *name) // ���� �����ϴ� �Լ�  
{
	station *del; // ��߿����� ���������� �� ���� 
	del = first; // del�� ��߿����� �����Ѵ�. 
	while(del != NULL) // �������� ���������� �ݺ� 
	{
		if(strcmp(name,del->name)==0) // �̸��� ������ �� 
		{
			del->prev->next = del->next;
			del->next->prev = del->prev;
			free(del); // �̸��� ���ٸ� ���� 
			printf("���� �Ϸ�\n");
		}
		del = del->next; // ���������� �Ѿ��. 
	}
	
}

// �˻��ϴ� ���� �����ϴ� �Ͱ� ������ ����.
// ���� ������ �ƴ϶� ����� �� 
void search_station(char *name) // ���� �˻��ϴ� �Լ� 
{
	station *search; // ��߿����� ���������� ���ư� ���� 
	search = first; // search�� ��߿����� ���� 
	while(search != NULL) // �������� ���������� �ݺ� 
	{
		if(strcmp(name,search->name)==0) // �̸��� ������ �� 
		{
			printf("%s\n", search->name); // �̸��� ���ٸ� ��� 
		}
		search = search->next; // ���������� �Ѿ��. 
	}	
	
}

void print() // ��ü�뼱 ��� �Լ� 
{
	station *all_prt; // ��߿����� ���������� ���ư� ���� 
	all_prt = first; // ��߿����� ���� 
	while(all_prt != NULL) // �������� ���������� �ݺ� 
	{
		printf("%s -> ", all_prt->name); // ���̸� ��� 
		all_prt = all_prt->next; // ���������� ����. 
	}
}

int main()
{
	init();
	int select; // �޴� ������ ���� ���� 
	char name[20]; // ����, �˻��� ���� ���� 
	
	while(select != 5)
	{
		
	printf("\n 1. �߰� 2. ���� 3. �˻� 4. ��ü�뼱 5. ����\n");
	printf("�޴� ���� : ");
	scanf("%d", &select);
	
	switch(select)
	{
		case 1:
			add_station(&add);
			break;
			
		case 2:
			printf("������ ���� �Է��ϼ��� : ");
			scanf("%s", &name);
			del_station(&name);
			break;
			
		case 3:
			printf("�˻��� ���� �Է��ϼ��� : ");
			scanf("%s", &name);
			search_station(&name); // �̸� ���� 
			
		case 4:
			print();
			break; 
			
	}
		}
	
	return 0;
}

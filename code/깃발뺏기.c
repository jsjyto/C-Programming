#include <stdio.h>
typedef struct route_info
{
	int num;  // ����ȣ 
	int *next; // ���� ���� ��ȣ 
	int knight; //�ʿ��� ���� ��  
}route_info;


int route[20][20];
int i, j;


int main()
{
	int num;
	printf("�� ���� �Է� : ");
	scanf("%d", &num); 
	for(i=0;i<num;i++)
{
	for(j=0;j<num;j++)
	{
		route[i][j] = 0;
		printf("%3d ",route[i][j] );
	}
	printf("\n");
}
	// M�� ��� ����� M�� ��ŭ �Լ� ����	
	return 0;
}

#include <stdio.h>
int main()
{
	int choose;
	printf("�޴� ���� : ");
	scanf("%d", &choose);
	while(choose != 0)
	{
		printf("%d\n",choose);
		printf("�޴� ���� : ");
		scanf("%d", &choose);
	
	}
	return 0;
}

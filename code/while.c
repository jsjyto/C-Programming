#include <stdio.h>
int main()
{
	int choose;
	printf("메뉴 선택 : ");
	scanf("%d", &choose);
	while(choose != 0)
	{
		printf("%d\n",choose);
		printf("메뉴 선택 : ");
		scanf("%d", &choose);
	
	}
	return 0;
}

#include <stdio.h>
typedef struct route_info
{
	int num;  // 성번호 
	int *next; // 다음 성의 번호 
	int knight; //필요한 병사 수  
}route_info;


int route[20][20];
int i, j;


int main()
{
	int num;
	printf("성 개수 입력 : ");
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
	// M이 경로 수라면 M번 만큼 함수 실행	
	return 0;
}

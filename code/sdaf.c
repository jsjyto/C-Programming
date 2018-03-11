#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n, m;
	int i;
	printf("사람 수와 백신 수를 입력하세요 : ");
	scanf("%d %d", &n, &m);
	int j;
	int *a_min = (int*)malloc(sizeof(int) * n);
	int *a_max = (int*)malloc(sizeof(int) * n);
	int *a = (int*)malloc(sizeof(int) * m);
	int *max_p = (int*)malloc(sizeof(int) * m);
	int *cnt = (int*)malloc(sizeof(int) * m);
	
	for(i=0;i<m;i++)
	{
		cnt[i] = 0;
	}
	int sum_cnt = 0;
	for(i=1;i<=n;i++)
	{
		printf("%d번째 사람의 최소량과 최대량 : ", i);
		scanf("%d %d", &a_min[i-1], &a_max[i-1]);
		if(a_min[i-1]<=a_max[i-1])
		{
			printf("%d번째 사람의 최소량:%d 최대량:%d\n",i,a_min[i-1],a_max[i-1]);
		}
		else
		{
			printf("알파성분의 함유량이 맞지 않습니다.\n");
			break;
		}
	}
	
	for(i=1;i<=m;i++)
	{
		printf("%d번째 백신의 성분량과 최대투여인원 수 입력 :" ,i);
		scanf("%d %d", &a[i-1], &max_p[i-1]);
	}
	
	for(i=1;i<=m;i++)
	{
		for(j=1; j<=n;j++)
		{
			if((a[i-1] >= a_min[j-1]) && (a[i-1] <= a_max[j-1]))
			{
					cnt[i-1]++;
					if(cnt[i-1] == max_p[i-1])
					{
						break;
					}
			}
		}
	}
	
	for(i=0;i<m;i++)
	{
		printf("%d\n", cnt[i]);
		sum_cnt = sum_cnt + cnt[i];
	}
	printf("백신으로 최대 투여 가능한 인원 수 : %d ", sum_cnt);
	return 0;
}

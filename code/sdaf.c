#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n, m;
	int i;
	printf("��� ���� ��� ���� �Է��ϼ��� : ");
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
		printf("%d��° ����� �ּҷ��� �ִ뷮 : ", i);
		scanf("%d %d", &a_min[i-1], &a_max[i-1]);
		if(a_min[i-1]<=a_max[i-1])
		{
			printf("%d��° ����� �ּҷ�:%d �ִ뷮:%d\n",i,a_min[i-1],a_max[i-1]);
		}
		else
		{
			printf("���ļ����� �������� ���� �ʽ��ϴ�.\n");
			break;
		}
	}
	
	for(i=1;i<=m;i++)
	{
		printf("%d��° ����� ���з��� �ִ������ο� �� �Է� :" ,i);
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
	printf("������� �ִ� ���� ������ �ο� �� : %d ", sum_cnt);
	return 0;
}

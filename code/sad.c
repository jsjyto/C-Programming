#include <stdio.h>
int main()
{
	int num1, num2, dan, cal;
	printf("1�����ڸ� �Է��ϼ��� : ");
	scanf("%d",&num1);
	printf("2�����ڸ� �Է��ϼ��� : ");
	scanf("%d",&num2);
	
	if(num1<num2)
	{	
		for(dan = num1; dan<=num2;dan++)
	{
		for(cal=1;cal<=9;cal++)
		{
			printf("%d * %d = %d\n",dan, cal, dan*cal);
		}
		printf("\n");
	}
}
	
else if(num1>num2)
{	
		for(dan = num1; dan>=num2;dan--)
	{
		for(cal=1;cal<=9;cal++)
		{
			printf("%d * %d = %d\n",dan, cal, dan*cal);
		}
		printf("\n");
	}
}

else
{
		dan = num1;
		for(cal=1;cal<=9;cal++)
		{
			printf("%d * %d = %d\n",dan, cal, dan*cal);
		}

}

	
	
	return 0;
}

#include<stdio.h>
int main()
{
	int in;
	printf("enter your desired table: ");
	scanf("%d",&in);
	int i;
	for (i=1;i<=10;i++)
	{
		int sum=in*i;
		printf("\t%d x %d = %d\n",in,i,sum);
	}
}

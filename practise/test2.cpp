#include<stdio.h>
int main()
{
    int c=50000;
	printf("%d\n",c);
	c=45000;
	printf("%d\n",c);
	int p;
	printf("enter your a here.\n");
	scanf("%d",&p);
	printf("%d is your a right?\n",p);
	int sum=c+p;
	printf("if %d",p);
	printf(" is your a then its sumition will be %d\n",sum);
	if(sum<1000000)
	{
		printf("your sum is less than (1000000>%d)\n",sum);
	}
	else
	{
		printf("your sum is greater than (1000000<%d)\n",sum);
	}
	return 0;
}

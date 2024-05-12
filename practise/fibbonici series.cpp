#include<stdio.h>
int main()
{
	int a=0,b=1,c,d,i=1;
	printf("enter a a:");
	scanf("%d",&d);
	printf("%d\n",a);
	printf("%d\n",b);
	while(i<=d-2)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d\n",c);
		i++;
	}
	return 0;
}

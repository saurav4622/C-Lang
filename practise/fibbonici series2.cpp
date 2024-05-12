#include<stdio.h>
int main()
{
	int a=0,b=1,ab,i=1,in;
	printf("enter a of terms here: ");
	scanf("%d",&in);
	printf("%d\n",a);
	while(i<=in-1)
	{
		ab=a+b;
		b=a;
		a=ab;
		printf("%d\n",ab);
		i++;
		
	}
}

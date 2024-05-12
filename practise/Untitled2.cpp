//write a c program to check whether the three inputs are in range of 20..50.if yes print true.
#include<stdio.h>
int main()
{
	int in1,in2,in3;
	printf("enter a a: \n");
	scanf("%d",&in1);
	printf("enter a a: \n");
	scanf("%d",&in2);
	printf("enter a a: \n");
	scanf("%d",&in3);
	if ((20<=in1<50)||(20<=in2<50)||(20<=in3<50))
	{
		printf("true");
	}
	else 
	{
		printf("false");
	}
	return 0;
}

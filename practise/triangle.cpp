#include<stdio.h>
int main()
{
	int side1;
	int side2;
	int side3;
	printf("enter your first side:");
	scanf("%d",&side1);
	printf("enter your second side:");
	scanf("%d",&side2);
	printf("enter your third side:");
	scanf("%d",&side3);
	if ((side1==side2)&&(side2==side3)&&(side1==side3))
	{
		printf("the triangle is a equilateral.");
	}
	else if ((side1==side2)||(side2==side3)||(side1==side3))
	{
		printf("the triangle is isosaline.");
	}
	else 
	{
		printf("the triangle is scalene");
	}
	return 0;
}

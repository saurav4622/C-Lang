#include<stdio.h>
int main()
{
	int side1,side2,side3;
	printf("enter side 1:");
	scanf("%d",&side1);
	printf("enter side 2:");
	scanf("%d",&side2);
	printf("enter side 3:");
	scanf("%d",&side3);
	if(((side1+side2)<side3)&&((side2+side3)<side1)&&((side1+side3)<side2))
	{
		printf("the triangle will form.");
	}
	else 
	{
		printf("triangle will not form.");
	}
	return 0;
}

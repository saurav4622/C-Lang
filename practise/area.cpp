#include<stdio.h>
int main()
{
	int ht;
	int wt;
	printf("enter a height:");
	scanf("%d",&ht);
	printf("enter a width:");
	scanf("%d",&wt);
	int area=(ht+wt);
	int peri=2*area;
	printf("your perimeter will be %d and your area will be %d.\n",peri,area);
	return 0;
	
}

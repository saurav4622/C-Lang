#include<stdio.h>
int main()
{
	
	int sell;
	int cost;
	printf("enter the cost price:");
	scanf("%d",&cost);
	printf("\nenter the sell price:");
	scanf("%d",&sell);
	if (sell>cost)
	{
		float profit=sell-cost;
	    int percent=((profit/cost)*100);
	    printf("congrats you earned a profit of %d percent",percent);
	}
	else 
	{
		float loss=cost-sell;
	    int percent=((loss/cost)*100);
	    printf("you have a loss of %d percent",percent);
	}
	return 0;
	

	
	
}

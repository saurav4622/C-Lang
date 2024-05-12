#include<stdio.h>
int main()
{
	int loop,i,dividend,j;
	float sum=0,input,percent;
	printf("How many subjects you want to enter? = ");
	scanf("%d",&loop);
	dividend=loop*100;
	char arr[loop][200];
	fflush(stdin);
	for(j=0;j<loop;j++)
	{
		printf("enter subject %d =",j+1);		
		fgets(arr[j],200,stdin);		
	}
	printf("\n");
	for(i=0;i<loop;i++)
	{
		printf("Enter the marks of %s =",arr[i]);
		scanf("%f",&input);
		sum=sum+input;
	}
	percent=(sum/dividend)*100;
	printf("========================================\n");
	printf("YOU SCORED!!: %.2f%%",percent);
	return 0;
}

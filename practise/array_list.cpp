#include<stdio.h>
int main()
{
	int n,i;
	char str[200];
	printf("how many data you want to enter: ");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("enter your string here: ");
		fgets(str[i],sizeof(str),stdin);
		
		
	}
}

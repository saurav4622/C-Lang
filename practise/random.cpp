#include<stdio.h>
int main()
{
	int a,i,c,d;
	printf("Enter the frequency: ");
	scanf("%d",&a);
	char arr[a][100];
	printf("\n");
	fflush(stdin);
	for (i=0;i<a;i++)
	{
		printf("Enter your element %d: ",i+1);
		fgets(arr[i],100,stdin);
	}
	printf("\n");
	for (c=0;c<a;c++)
	{
		printf("%s \n",arr[c]);
	}
}

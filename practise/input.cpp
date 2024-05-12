#include<stdio.h>
int main()
{
	int num;
	int num2;
	char name[30];
	printf("enter your name:\n");
	scanf("%s",&name);	
	printf(" enter your a: \n");
	scanf("%d",&num);
	printf("enter your second a:\n ");
	scanf("%d",&num2);
	int sum=num+num2;
	
	printf("your a is: %d \n",num);
	printf("your name is: %s \n",name);
	printf("your sum will be:%d",sum);
	return 0;
}

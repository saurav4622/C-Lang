#include<stdio.h>
int main()
{
	int in,i=1;//here the program takes 1
	printf("enter your no:");
	scanf("%d",&in);
	while (i<=in)//then checks here while the i is less then 21
	{
	int sum=i%2;//if i is less then 21  then here it takes the remainder.
	(sum==0)?printf("%d,this is an even a.\n",i):printf("%d,this is an odd a.\n",i);//if the remainder is 0 it will print as even and if not equal to 0 it will be odd.

	i+=1;}//after printing odd/even here the program will increase the value by 1.which will again go to the while loop.
	return 0;

}


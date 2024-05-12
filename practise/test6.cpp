//this program interchanges the value.
#include<stdio.h>
#include<conio.h>


int main()
{
	int a=9 , b=10,c;
	c=a+b;
	a=c-a;
	b=c-b;
	printf("a=%d and b=%d",a,b);
	getche();
	return 0;
	
}

#include<stdio.h>
int main()
{
	int a=100;
	int b=sizeof(++a);
	printf("%d",b);
	return 0;
}

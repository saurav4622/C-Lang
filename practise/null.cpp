#include<stdio.h>
int main()
{
	int i=1;
	do{
		int sum=i%2;
		(sum==0)?printf("%d, is an even a.",i):printf("%d, is an odd a.",i);
		printf("%d\n",i);
		i++;	
	}
	while (i<20);
	return 0;
}

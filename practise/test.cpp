#include<stdio.h>
int main()
{
	printf("codes for logical operators\n");
	int s=4;
	int z=9;
	printf("%d\n",s<z);
	printf("%d\n",s>z);
	printf("%d\n",s==z);
	printf("%d\n",s!=z);
	printf("%d\n",s>=z);
	printf("this is AND operator,%d\n",s>3&&z<4);
	printf("this is OR operator,%d\n",s>3||z<4);
	printf("this is NOT operator,%d\n",!s>3&&z<4);

	return 0;
}

#include <stdio.h>
int main()
{
	int array[]={1234,5678,2145,2343,4589,1232};
	
	int i;
	for(i=0;i<6;i++)
	{
		printf("%d\n",array[i]);
	}
	int ar2[5];
	ar2[0]={25};
	ar2[1]={30};
	ar2[2]={58};
	ar2[3]={75};
	ar2[4]={83};
	printf("%d\n",ar2[4]);
	return 0;
	
}

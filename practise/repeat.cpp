#include<stdio.h>
#include<string.h>
int main()
{
	char in[500];
	printf("enter your name here: ");
 fgets(in,sizeof(in),stdin);
	int ln=strlen(in);
	int i;
 for (i=0;i<=ln;i++)
	{
		printf("\t\t\t");
		printf("%c\n",in[i]);
	}
}

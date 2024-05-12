#include<stdio.h>
int main()
{
	char in[500];
	printf("enter your name here: ");
	fgets(in,sizeof(in),stdin);
	in[0]='X';
	printf("%s",in);
}

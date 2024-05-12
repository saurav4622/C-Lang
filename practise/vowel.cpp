#include<stdio.h>
int main()
{
	char in;
	printf("enter a a single character:\n");
	scanf("%c",&in);
	if ((in>='a'&&in<='z')||(in>='A' && in<='Z'))
	{
		if (in=='a'||in=='A'||in=='e'||in=='E'||in=='i'||in=='I'||in=='o'||in=='O'||in=='u'||in=='U')
		{
			printf("%c is a vowel.",in);
		}
		else 
		{
			printf("%c is a consonant.",in);
		}
	}
	else 
	{
		printf("%c is neither a consonant nor a vowel.",in);
		
	}
	return 0;
}

#include<stdio.h>
int main()
{
	char vowel;
	printf("enter your character: ");
	scanf("%c",&vowel);
	switch(vowel)
	{
		case'a':
		case'A':
		case'e':
		case'E':
		case'i':
		case'I':
		case'o':
		case'O':
		case'u':
		case'U':
			printf("this is a vowel");
			break;
		default:
			printf("this is a constant");
	}
}

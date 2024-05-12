//In this we reverse the number provided by the user.
#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
	int a,c,b,s=0;
	
	printf("enter your number here: ");
	scanf("%d",&a);
	c=a;
	while (a > 0)
	{
		b= a % 10;
		s= (s*10) +b;
		a= a / 10;
	}
	if (s==c){
		printf("The number is palindrome.");
	}
	else{
		printf("The number is not a palindrome");
	}	
}

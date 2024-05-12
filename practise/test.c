#include<stdio.h>
int main()
{
    char ch,s[50],sen[100];
    scanf("%c%s",&ch,s);
    fflush(stdin);
    fgets(sen,100,stdin);
    printf("%c\n%s\n%s",ch,s,sen);
}
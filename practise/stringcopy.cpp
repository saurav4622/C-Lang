//write a c program to copy of a string without using strcpy() library function 
#include <stdio.h>
#include<string.h>
int main()
{
    int c=0;
    char s[50],d[50];
    printf("enter string:\n");
    gets(s);//input a string
    while(s[c] != '\0')
    {
        d[c] = s[c];
        c=c+1;
    }
    d[c]='\0';
    puts(s);
    puts(d);
    return 0;
}
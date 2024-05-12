#include<stdio.h>
#include<string.h>
int main()
{
    char a[]="Computer programming";
    int i,l;
    l=strlen(a);
    for(i=0;i<=1;i++)
    {
        printf("\n%*.*s",l,i,a);
    }
}

#include<stdio.h>
int main()
{
    char in[100];
    printf("Enter your string:");
    fgets(in,100,stdin);
    
    for(int i=0;i<=100;i++)
    {
        printf("%s",in[i]);
    }
}
#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter your name:");
    scanf("%[^#]s",str);//used for multiline strings
    printf("%s",str);
    
}
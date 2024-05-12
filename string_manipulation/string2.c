#include<stdio.h>
#include<conio.h>
int main()
{
    char string[100];
    int i=0;
    printf("Enter Any String: ");
    gets(string);
    while (string[i] !='\0')
    {
        printf("%c",string[i]);
        if(string[i] == ' ')
            printf("\n");
        i++;
    }
    printf("\nTotal number of characters in the string \"%s\" is %d",string,i);
}
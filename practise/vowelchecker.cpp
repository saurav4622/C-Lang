#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    char ch[1000],vow[1000],con[1000],spc[1000];
    printf("enter you text here: ");
    gets(ch);
    printf("%s",ch);
    int i,j;
    for (i=0;i<1000;i++)
    {
        if (ch[i]=='A'&&ch[i]=='a'&&ch[i]=='E'&&ch[i]=='e'&&ch[i]=='I'&&ch[i]=='i'&&ch[i]=='U'&&ch[i]=='u'&&ch[i]=='o'&&ch[i]=='O')
        {
            vow[i]=ch[i];
        }
        /*else if (ch[i]=' ')
        {
            spc[i]=chi[i];
        }*/
        else{
            con[i]=ch[i];
        }
    }
    printf("\ntotal vowels are:-");
    for (i=0;i<1000;i++)
    {
        printf("%c,",vow[i]);
    }
    /*printf("total consonants are:-");
    {
        printf("%c,",con[i]);
    }*/
}
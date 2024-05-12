#include<stdio.h>
#include<conio.h>
void main()
{
 int i,n;
 clrscr();
 printf("Enter the limit:");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
 if(i%7==0)
 {
 continue;
 }
 printf("%d",i);
 }
 getch();
}

// Polynomial Addition using Array
#include<stdio.h>
#include<stdlib.h>
int poly(int a[],int n)
{
int p,c,i,terms;
printf("\nEnter Number of Terms : ");
scanf("%d",&terms);
for(i=0;i<terms;i++)
{
printf("Enter The %d Power:\n",i+1);
scanf("%d",&p);
printf("Enter The %d Co-efficient:-\n",i+1);
scanf("%d",&c);
a[p]=c;
}
}
int display(int a[],int n)
{
int i,flag=0;
for(i=n-1;i>=0;i--)
{
if(a[i]!=0)
{
if(flag==0)
{
printf(" %dx^%d",a[i],i);
flag=1;
}
else
{
printf(" + %dx^%d",a[i],i);
}
}
}
printf("\n");
}
int addpoly(int a1[],int a2[],int sum[],int n)
{
int i;
for(i=n;i>=0;i--)
{
sum[i]=a1[i]+a2[i];
}
}
int main()
{
int i,no=100,a[100]={0},b[100]={0},sum[100]={0};
int ch;
while(1)
{
printf("\nPress 1 To Input 1ST Polynomial No.\n");
printf("Press 2 To Display 1ST Polynomial No.\n");
printf("Press 3 To Input 2ND Polynomial No.\n");
printf("Press 4 To Display 2ND Polynomial No.\n");
printf("Press 5 To Addition Of Two Polynomial No.\n");
printf("Press 6 To Display  Sum Of Polynomial No.\n");
printf("Press 7 To Exit\n");
printf("Enter Your Choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1:poly(a,no);
break;
case 2:display(a,no);
break;
case 3:poly(b,no);
break;
case 4:display(b,no);
break;
case 5:addpoly(a,b,sum,no);
break;
case 6:display(sum,no);
break;
case 7:exit(1);
break;
default:printf("Wrong Choice\n");
break;
        }
    }
}
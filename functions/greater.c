#include<stdio.h>
int a,b,c,d,i,max;
int max_of_four(int a, int b, int c, int d)
{
    int max;
    if (a>b && a>c && a>d)
    {
        max=a;
    }
    else if (b>a && b>c && b>d)
    {
        max=b;
    }
    else if(c>a && c>b && c>d)
    {
        max=c;
    }
    else 
    {
        max=d;
    }
    return max;
}
int main()
{
   scanf("%d%d%d%d",&a,&b,&c,&d);
   printf("%d",max_of_four(a,b,c,d));
}

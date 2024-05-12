#include<stdio.h>
int main()
{
    int a=1,b=0,c,d,in1,in2,sum,rem[100],ans;
    printf("Enter to numbers =");
    scanf("%d%d",in1,in2);
    while(a>0)
    {
        if(in1%a==0)
        {
            sum=in1/a;
            ans=a;
            scanf("%d",&rem[a]);
            in1=sum;
            a++;
        }
        else if(a>in1)
        break;    
    }
    while(b>0)
    {
        printf("%d",rem[b]);
    }
    
}
#include<stdio.h>
int main()
{
    int n,a,b,c,d;
    float sum=0,sum2=0;
    printf("Enter the range = ");
    scanf("%d",&n);
    int x[n],f[n],fx[n];
    printf("Enter the value of 'x' below.(PRESS ENTER)");
    for(a=0;a<n;a++)
    {
        printf("\nx%d = ",a+1);
        scanf("%d",&x[a]);
    }
    printf("Enter the value of 'f' below.(PRESS ENTER)");
    for(b=0;b<n;b++)
    {
        printf("\nf%d = ",b+1);
        scanf("%d",&f[b]);
        sum2=sum2+f[b];
    }
    for (c=0;c<n;c++)
    {
        fx[c]=x[c]*f[c];
    }
    for(d=0;d<n;d++)
    {
        sum=sum+fx[d];
    }
    double formula=sum/sum2;
    printf("MEAN = %.2lf",formula);
}
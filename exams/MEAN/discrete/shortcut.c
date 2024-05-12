#include<stdio.h>
int main()
{
    int n,a,b,c,i,j,as;
    float sum=0,sum2=0;
    printf("Enter range = ");
    scanf("%d",&n);
    int x[n],f[n],fd[n],d[n];
    printf("Enter assumed mean = ");
    scanf("%d",&as);
    printf("Enter the value of 'x' below\n");
    for(a=0;a<n;a++)
    {
        printf("x%d = ",a+1);
        scanf("%d",&x[a]);
        printf("\n");
    }
    printf("Enter the value of 'f' below\n");
    for(b=0;b<n;b++)
    {
        printf("f%d = ",b+1);
        scanf("%d",&f[b]);
        printf("\n");
        sum=sum+f[b];
    }
    for(c=0;c<n;c++)
    {
        d[c]=x[c]-as;
    }
    for(i=0;i<n;i++)
    {
        fd[i]=f[i]*d[i];
    }
    for(j=0;j<n;j++)
    {
        sum2=sum2+fd[j];
    }
    float formula=as+(sum2/sum);
    printf("\nMEAN = %.2f",formula);
}
//Program to implement linked file allocation method
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    int f[50],p,len,j,c,k,a,i,st;
    for(i=0;i<50;i++)
    {
        f[i]=0;
    }
    printf("Enter how many blocks already allocated: ");
    scanf("%d",&p);
    printf("Enter blocks already allocated: ");
    for(i=0;i<p;i++)
    {
        scanf("%d",&a);
        f[a] = 1;
    }
    x:printf("Enter inbox starting block and length: ");
    scanf("%d%d",&st,&len);
    k=len;
    if(f[st]==0)
    {
        for(j=st;j<(st + k);j++)
        {
            if(f[i]==0)
            {
                f[j] = 1;
                printf("%d------------->%d\n",j,f[j]);
            }
            else{
                printf("%d Block is already allocated\n",j);
                k++;
            }
        }
    }
    else
    printf("%d Starting block is already allocated\n",st);
    printf("Do you want to enter more file(yes-1/no-0)");
    scanf("%d",&c);
    if(c==1)
    goto x;
    else
    exit(0);
}
//this program was created on 26th august,2023.
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int f[50],i,st,len,j,c,k,count=0;
    for(i=0;i<50;i++)
    f[i]=0;
    printf("Files allocated are:\n");
    x:count=0;
    printf("Files start and length allocated are:\n");
    scanf("%d%d",&st,&len);
    for(k=st;k<(st+len);k++)
    {
        printf("\nk=%d\n",k);
        if(f[k]==0);
        count++;
        printf("\nf[k]=%d",f[k]);
    }
    if(len==count)
    {
        printf("\nlen=%d\n",f[k]);
        for(j=st;j<(st+len);j++)
        {
            printf("\nj=%d\n",j);
            if(f[j]==0)
            {
                f[j]=1;
                printf("%d\t%d\n",j,f[j]);
            }
        }
        if(j!=(st+len-1))
        {
            printf("\n=%d\n",j);
            printf("\n Allocated Disks:\n");
        } 
    }
    else
        printf("\nFiles Allocated Not:\n");
        printf("\nDo you enter more yes->1 no->0: ");
        scanf("%d",&c);
        if(c==1)
        goto x;
        else
        exit(0);
}
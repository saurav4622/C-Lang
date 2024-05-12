#include<stdio.h>
int main()
{
    char arr[100][100]={"one","two","three","four","five","six","seven","eight","nine"};
    int a,b;
    scanf("%d%d",&a,&b);
    for (int i=a;i<=b;i++)
    {
        if(i>=1 && i<=9)
        {
            printf("%s\n",arr[i-1]);
        }
        else if(i>9)
        {
            int sum=i%2;
            if(sum==0)
            {
                printf("even");
            }
            else
            printf("odd");
            printf("\n");
        }
    }  
}
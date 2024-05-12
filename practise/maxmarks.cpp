#include<stdio.h>
int main()
{
    int marks[60],i,maxm;
    for (i = 0;i<60;i++)
    {
        printf("\nenter marks of student %d =",i);
        scanf("%d",&marks[i]);
    }
    maxm = marks[0];
    for (i=1;i<60;i++)
    {
        if (marks[i]>maxm)
        {
            maxm = marks[i];
        }
    }
    printf("the highest marks is %d",maxm);
}
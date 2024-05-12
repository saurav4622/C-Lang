#include<stdio.h>
#include<stdlib.h>
int main()
{   
    int i,in,fn,ar,j;
    char ch;
    printf("this is the program to take the input in array.");
    printf("\n-----------------------------------------------\n");
    printf("enter your array frequency: ");
    scanf("%d",&fn);
    int arr[fn];

    for (i=0;i<fn;i++)
    {
        printf("enter your %d element here:",i);
        scanf("%d",&arr[i]);
        printf("\n");
    }
    
    printf("\n\nENTER WHICH ELEMENT YOU WANT TO SEE: ");
    scanf("%d",&in);
    printf("your %d element is %d\n\n",in,arr[in]);
    fflush(stdin);
    printf("do you want to change any element:(y/n)?=");
    scanf("%c",&ch);
    if (ch=='y')
    {
        while(i)
        {
            printf("\nenter your array number: ");
            scanf("%d",&ar);
            printf("enter your element: ");
            scanf("%d",&arr[ar]);
            fflush(stdin);
            printf("\ndo you want to change any element:y/n?= ");
            scanf("%c",&ch);
            if (ch=='y')
            {
                continue;
            }
            else if (ch=='n')
            {
                break;
            }
        }
    }
    printf("\n");
	for (i=0;i<fn;i++)
	{
		printf("your %d's element= %d\n",i,arr[i]);
	}
}

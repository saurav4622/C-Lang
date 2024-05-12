#include<stdio.h>
#include<string.h>
int main()
{
    int freq,i,d,position;
    char choice[3],choice2;
    printf("This is the program to input your array.\n");
    printf("==========================================\n");
    printf("Which type of data your want to enter in your array.\nFor string type (ch) for integer type (in)\n");
    printf("\nEnter here: ");
    scanf("%s",choice);
    printf("What will be the frequency of the array: ");
    scanf("%d",&freq);
    char arrch[freq][100];
    int arrin[freq];
    fflush(stdin);
    printf("\n");
    if (strcmp(choice,"ch")==0)
    {
        printf("ARRAY FOR STRING.\n");
        for (i=0;i<freq;i++)
        {
            printf("Enter element number %d: ",i+1);
            fgets(arrch[i],100,stdin);
        }
        while (i>0)
        {
        printf("Do you want to change any item?\n");
        printf("Type 'y' for yes and 'n' for no.\n(y/n) = ");
        scanf("%c",&choice2);
        switch(choice2)
        {
            case 'y':
            printf("Enter the array position number you want to change = ");
            scanf("%d",&position);
            fflush(stdin);
            printf("Now enter the new value = ");
            fgets(arrch[position-1],100,stdin);
            printf("\nYour new value for the position %d = %s\n ",position,arrch[position-1]);
            i++;
            continue;

            case 'n':
            i=0;
            break;

            default: 
            printf("INVALID INPUT CHOOSE AGAIN.\n");
            i++;
            continue; 
        }
        printf("\nYour array will be.\n");
        printf("======================\n");
        for (int j=0;j<freq;j++)
        {
            printf("array number %d = %s\n",j+1,arrch[j]);
        }
        }
    }
    else if (strcmp(choice,"in")==0)
    {
        for (d=0;d<freq;d++)
        {
            printf("Enter the element number %d: ",d+1);
            scanf("%d",&arrin[d]);
        }
        while (i>0)
        {
        printf("Do you want to change any item?\n");
        printf("Type 'y' for yes and 'n' for no.\n(y/n) = ");
        scanf("%c",&choice2);
        switch(choice2)
        {
            case 'y':
            printf("Enter the array position number you want to change = ");
            scanf("%d",&position);
            fflush(stdin);
            printf("Now enter the new value = ");
            scanf("%d",&arrin[position-1]);
            printf("\nYour new value for the position %d = %d\n ",position,arrin[position-1]);
            i++;
            continue;

            case 'n':
            i=0;
            break;

            default: 
            printf("INVALID INPUT CHOOSE AGAIN.\n");
            i++;
            continue; 
        }
        printf("\nYour array will be.\n");
        printf("======================\n");
        for (int j=0;j<freq;j++)
        {
            printf("array number %d = %d\n",j+1,arrch[j]);
        }
        }
    }
    else
    {
        printf("Invalid Input please select from (ch/in)");
    }  
}
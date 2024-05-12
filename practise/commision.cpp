#include<stdio.h>
int main()
{
    int sales_value;
    printf("Enter your sales value: ");
    scanf("%d",&sales_value);
    if (sales_value<5000)
    {
        float com1=sales_value*0.05;
        int com=sales_value+com1;
        printf("you earned 5 percent of commission = %d",com);
    }
    else if ((5000<sales_value)||(sales_value<7500)){
        float com2=sales_value*0.1;
        int maincom=com2+100;
        int com;         
        if(650>maincom)
        {
           int comless=650-maincom;
           com=comless+maincom;
           printf("you earned 10 percent + 100Rs of commission = %d",com);
        }
        else if(800<com)
        {
            int comore=com-800;
            com=comore-maincom;
            printf("you earned 10 percent + 100Rs of commission = %d",com);
        }
        else
        printf("you earned 10 percent + 100Rs of commission = %d",maincom);
    }
    else if(10000<sales_value)
    {
        float com3=sales_value*0.15;
        int com=com3+sales_value;
        printf("you earned 15 percent of commission = %d",com);
    }
    else
    printf("you have done a great job you earned 100Rs = %d",sales_value+100);
}
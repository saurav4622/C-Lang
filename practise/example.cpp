#include<stdio.h>
int main()
{
    float number1,number2,result;
    int opt;
    printf("\n========================");
    printf("\n\t Menu");
    printf("\n========================");
    printf("\nEnter 1 for addition.");
    printf("\nEnter 2 for subtraction.");
    printf("\nEnter 3 for multiplication.");
    printf("\nEnter 4 for division.");
    printf("\n=========================");
    printf("\nEnter your option:");
    scanf("%d",&opt);
    printf("===========================");
    if (opt>1||opt<4)
    {
        printf("\nEnter first Numbers: ");
        scanf("%f",&number1);
        printf("\nEnter Second Number: ");
        scanf("%f",&number2);
        switch(opt)
        {
            case 1: result = number1+number2 ;
                        break;
            case 2: result = number1-number2;
                        break;
            case 3: result = number1*number2;
                        break;
            case 4: result = number1/number2;
                        break;

        }
        printf("\nResult = %f",result);
    }


}

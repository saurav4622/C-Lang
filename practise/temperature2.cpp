#include<stdio.h>
int main()
{
    int in,out,i=1;
    float temp,sum;
    while(i)
    {
    printf("\n");
    printf("\n===================================\n");
    printf("1.celsius\n2.fahrenheit\n3.kelvin\n");
    printf("enter your input choice: ");0
    scanf("%d",&in);
    printf("now enter output choice: ");
    scanf("%d",&out);
    printf("enter your temperature: ");
    scanf("%f",&temp);
    printf("\n===================================\n");
    switch(in)
    {
        case 1: 
        switch(out)
        {
            case 2:sum=(1.8*temp)+32;
            printf("%f fahrenheit",sum);
            break;
            case 3:sum=(temp+273.15);
            printf("%f kelvin",sum);
            break;
            default:printf("INVALID INPUT");
            break;
        }
        break;
        case 2:
        switch(out)
        {
            case 1:sum=((temp-32)*(5/9));
            printf("%f celsius",sum);
            break;
            case 3:sum=((temp-32)*(5/9))+273.15;
            printf("%f kelvin",sum);
            break;
            default:printf("INVALID INPUT");
            break;
        }
        break;
        case 3:
        switch(out)
        {
            case 1:sum=temp-273.15;
            printf("%f celsius",sum);
            break;
            case 2:sum=((9/5)*(temp-273.15))+32;
            printf("%f fahrenheit",sum);
            break;
            default:printf("INVALID INPUT");
            break;
        }
        break;
        default:printf("INVALID INPUT");
        break;
    }}
}
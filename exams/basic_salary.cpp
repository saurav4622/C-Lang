#include<stdio.h>
int main()
{
    float salary;
    float hra,da;
    printf("Enter your salary:-");
    scanf("%f",&salary);
    if (salary<=10000)
    {
        hra = salary*0.2;
        da = salary*0.8;
        printf("HRA = %.2f\nDA = %.2f\nTOTAL = %.2f",hra,da,hra+da+salary);
    }
    else if(10000<salary<=20000)
    {
        hra=salary*0.25;
        da=salary*0.9;
        printf("HRA = %.2f\nDA = %.2f\nTOTAL = %.2f",hra,da,hra+da+salary);
    }
    else
    {
        hra=salary*0.3;
        da=salary*0.95;
        printf("HRA = %.2f\nDA = %.2f\nTOTAL = %.2f",hra,da,hra+da+salary);
    }
}
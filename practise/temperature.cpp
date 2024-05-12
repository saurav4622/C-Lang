#include<stdio.h>
int main()
{
    int chi,cho;
    float temp,sum;
    printf("1.celsius\n2.fahrenheit\n3.kelvin\n");
    printf("choose your input scale:- ");
    scanf("%d",&chi);
    printf("enter your temperature:- ");
    scanf("%f",&temp);
    printf("1.celsius\n2.fahrenheit\n3.kelvin\n");
    printf("choose in which scale you want your output:-");
    scanf("%d",&cho);
    if (chi==1)
    {
    	if (cho==2)
    	{
        	sum=(1.8*temp)+32;
    		printf("%f fahrenheit",sum);
		}
		else if(cho==3)
		{
			sum=temp+273.15;
            printf("%f kelvin",sum);
		}
        else
        printf("INVALID INPUT..");
	}
    else if (chi==2)
    {
        if (cho==1)
        {
            sum=((temp-32)*(5/9));
            printf("%f celsius",sum);
        }
        else if (cho==3)
        {
            sum=((temp-32)*(5/9))+273.15;
            printf("%f kelvin",sum);
        }
        else
        printf("INVALID INPUT.");
    }
    else if(chi==3)
    {
        if (cho==1)
        {
            sum=temp-273.15;
            printf("%f celsius",sum);
        }
        else if (cho==2)
        {
            sum=((9/5)*(temp-273.15))+32;
            printf("%f fahrenheit",sum);
        }
        else
        printf("INVALID INPUT");
    }
    else
    printf("\nINVALID INPUT");

}

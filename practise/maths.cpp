//this code is generated at 12/01/2022 (thursday) at 12:09PM
#include<stdio.h>
#include<math.h>
#define PI 3.141592654
double input,result;
int main()
{
    int option;
    printf("WELCOME TO THE VIRTUAL ASSISTANT CALCULATOR!\n");
    printf("*********************************************\n");
    printf("Which type of calculation you would like to command to your assistant.?\n");
    printf("So let me give you some quick options that you can try like..\n");
    printf("1.square root\n2.cube root\n3.find sin cos tan\n4.find exponent\n5.find integer less than your number\n6.find logarithm\n7.find hypoteneuse\n8.round off\n9.find power of");
    printf("\nenter your desired option here:-");
    scanf("%d",&option);
    switch(option)
    {
        case 1:
            //this codes are shown for the use of sqrt.
            int a,b,c;
            printf("enter a number:- ");
            scanf("%d",&a);
            b=sqrt(a);
            printf("%d is the square root of %d",b,a);
            //the above code is for the square root of int value.
            
            float a1,b1,c1;
            printf("\nenter float value:- ");
            scanf("%f",&a1);
            b1=sqrt(a1);
            printf("%.2f is the square root of %.2f",b1,a1);
            //the above code is for the float value.

            double a2,b2,c2;
            printf("\nenter double data:-");
            scanf("%lf",&a2);
            b2=sqrt(a2);
            printf("%.2lf is the square root of %.2lf\n",b2,a2);
            //the above code is for double value
            //*************************************************
        case 2:
            //below code will show the cube root 
            printf("enter a number:- ");
            scanf("%d",&a);
            b=cbrt(a);
            printf("%d is the cube root of %d\n",b,a);
            break;

        case 3:
            //below code will show the cosine,sine,tangent of the argument
            double ang,cd,ef,gh;
            printf("enter your angle here: ");
            scanf("%lf",&ang);
            // cosine always measures the value by radian not in angle so we need to convert it first.
            ang=(PI/180)*ang;
            cd=cos(ang);
            ef=sin(ang);
            gh=tan(ang);
            printf("the cosine of your angle %.3lf will be %.3lf\nsine will %.3lf\ntan will be %.3lf\n",ang,cd,ef,gh);
            break;

        case 4:
            //below code will show the exponential form.
            double af,nf;
            printf("enter exponent: ");
            scanf("%lf",&af);
            nf=exp(af);
            printf("the exponent of your number will be %.3lf\n",nf);
            break;

        case 5:
            //below code will calculate the nearest integer less then the argument.
            double ab,bc;
            printf("enter number(small):");
            scanf("%lf",&ab);
            bc=floor(ab);
            printf("the nearest smallest value to the the number %.2lf is %.2lf\n",ab,bc);
            break;

        case 6:
            //below code will tell the log of an argument 
            printf("enter number(log):");
            scanf("%lf",&input);
            result=log(input);
            printf("Log(%lf)=%.2lf\n",input, result);
            break;

        case 7:
            //below code will show the hypotenuese of an argument 
            double in1,in2;
            printf("enter your first side:");
            scanf("%lf",&in1);
            printf("enter your second side:");
            scanf("%lf",&in2);
            result=hypot(in1,in2);
            printf("your hypotuneus of two sides will be %.2lf\n",result);
            break;

        case 8:
            //below code will show the rounded off the argument
            printf("enter number(round):");
            scanf("%lf",&input);
            result=round(input);
            printf("%.2lf is rounded of to %.2lf\n",input,result);
            break;

        case 9:
            //below code will tell the power of the arguments
            double base,power;
            printf("enter base value: ");
            scanf("%lf",&base);
            printf("enter your power: ");
            scanf("%lf",&power);
            result=pow(base,power);
            printf("%.2lf",result);
            break;
    }
   
}

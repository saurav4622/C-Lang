#include<stdio.h>
#include<math.h>
int main()
#define pie 3.1415926
{
    double area, perimeter,rad;
    printf("Enter radius in cm = ");
    scanf("%lf",&rad);
    area=pie*pow(rad,2);
    perimeter=2*pie*rad;
    printf("Area of circle = %.2lfcm and perimeter = %.2lfcm",area,perimeter);

}
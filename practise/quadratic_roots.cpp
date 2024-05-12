#include<stdio.h>
#include<math.h>
int main(){
    int a,c,b,inter;
    float t;
    printf("enter the coefficients of quadratic equations: ");
    scanf("%d%d%d",&a,&b,&c);
    inter=b*b-4*a*c;
    if (inter<0)
    {
        puts("Imaginary Roots");
        printf("Roots are %d + i%d and %d - i%d",a,b,a,b);
    }
    else if(inter==0)
    {
        printf("Roots are equal and it is %d", -b/(2*a));
    }
    else
    {
        t=sqrt(inter);
        printf("Roots are %.2f and %.2f ",(-b+t)/(2*a),(-b-t)/(2*a));
    }
}
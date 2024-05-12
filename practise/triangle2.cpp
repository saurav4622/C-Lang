#include<stdio.h>
int main()
{
    double s1,s2,s3;
    printf("enter the sides of the triangle: ");
    scanf("%lf%lf%lf",&s1,&s2,&s3);
    if(s1<s2+s3 && s2<s1+s3 && s3<s2+s1)
    {
        printf("they forming a triangle\n");
        if (s1==s2 && s2==s3 && s3==s1)
        {
            printf("the triangle is equilateral");
        }
        else if((s1==s2 && s1!=s3) || (s2!=1 && s2==s3) || (s3==s1 && s2!=s3))
        {
            printf("the triangle is isosceles triangle.");
        }
        else{
            printf("the triangle is scalene.");
        }
    }
    else
    {
        printf("sum of two sides of the triangle must be greater than the third side.");
    }

}
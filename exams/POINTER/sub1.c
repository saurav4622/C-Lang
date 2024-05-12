#include<stdio.h>
int main()
{
    int a=14;
    int* ar=&a;
    printf("%d is the value of a.\n",a);
    printf("And %p is the address of a.\n",&a);
    printf("%d \n",&a);
    printf("%p",a);
    printf("\nar1=%p",ar);
    printf("\nar2=%d",ar);//dont know what it is.
    printf("\nar3=%d",&ar);//dont know what it is.
    printf("\nar4=%d",*ar);
    printf("\nar5=%p",*ar);//dont know how it came.
}
#include<stdio.h>

// Function prototype
char* dev(int);

int main()
{
   int in;
   printf("Enter your number: ");
   scanf("%d",&in);
   printf("%d=%s",in,dev(in));
   return 0;
}

// Function definition
char* dev(int in)
{
    switch (in) {
        case 1:
            return "one";
        case 2:
            return "two";
        case 3:
            return "three";
        case 4:
            return "four";
        case 5:
            return "five";
        case 6:
            return "six";
        case 7:
            return "seven";
        case 8:
            return "eight";
        case 9:
            return "nine";
        default:
            return "Unknown";
    }
}

#include<stdio.h>
int main(){
    char number;
    printf("enter your case here: ");
    scanf("%c",&number);
    switch(number){
        case 'a':
        case 'A':printf("EXCELLENT.");
        break;
        case 'b':
        case 'B':printf("GOOD");
        break;
        case 'c':
        case 'C':printf("NICE.");
        break;
        case 'd':
        case 'D':printf("OK");
        break;
        case 'e':
        case 'E':printf("NOT SO GOOD.");
        break;
        case 'f':
        case 'F':printf("VERY BAD");
        break;
        default:printf("we are in default.");
        break;
    }
}
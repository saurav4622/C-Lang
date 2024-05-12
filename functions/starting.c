//Here we are going to create a Function.
#include<stdio.h>
int a;

//Here comes the function with no input and output.
void mine()
{
    printf("This function will not take and input neither provides a output.");
}
//here comes the function with no input but a output.
int mine2()
{
    printf("This is also not going to take any input but return a value.\n");
    return 45; 
}
//Here comes the function that takes input but give no output.
int mine3(int y)
{
    printf("This will return nothing.");
}

int main()
{
    mine();
    printf("\n\n");
    int x=mine2();
    printf("returned value: %d",x);
    printf("\n\n");
     
}






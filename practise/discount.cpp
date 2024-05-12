#include<stdio.h>
int main(){
    int pur;
    
    printf("=============================\n");
    printf("Enter purchase amount:-");
    scanf("%d",&pur);
    printf("\n========================================\n");

    if (pur>=5000){

        float dis=pur*0.1;
        float gst=pur*0.02;
        int subtotal=pur-dis;
        int total=subtotal-gst;

        printf("your purchase amount = %d",pur);
        printf("\ntotal gst of 2 percent applied = %f\n",gst);
        printf("you are availing a discount of %f\n",dis);
        printf("your net payable amount will be = %d",total);
        printf("\n========================================");

    }

    else 

    printf("your amount is less than 5000 so you have to shop %d more, to avail 10 percent off..!!",(5000-pur));
   
    
}
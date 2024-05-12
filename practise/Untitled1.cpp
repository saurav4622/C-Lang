#include<stdio.h>
//this is a single line comment.
/*this is a multiline comment
here i can write on an another line.*/
int main()
{
	printf("Hello World!!\n");//hello world and shift to another line.
	printf("I am Saurav Parui.\t");//string with horizontal shift.
	printf("I study in Techno India Hooghly college.\n\n");//string with a line gap.
	printf("I live in serampore.\\");//string with a "/" within it.
	printf("My previous hometown was agra.");//normal string
	printf("I am a bca student.\n");
	int mynum=15;//variable assigned.
    printf("%d\n",mynum);//for int use %d.
	char myname='v';
	printf("%c\n",myname);//for str use %c.
	float myfloat=12.35;
	printf("%f\n",myfloat);//for float use %f
	int sum=mynum+myfloat;
	int x=9,y=10,z=11;
	printf("%d\n",x+y+z);
	printf("%d\n",sum);
	int a,b,c;
	a=b=c=20;
	printf("hello world this is the sum of three times 20 = %d\n",a+b+c);
	int sum1=100+200;
	printf("%d\n",sum1);// for adding use +
	int sum2=sum1+200;
	printf("%d\n",sum2);
	int sum3=sum1+sum2;
	printf("%d\n",sum3);
	int sum4=sum1-sum2;// for subtraction use -
	printf("here comes the subtraction, %d\n",sum4);
	int div=sum1/sum2;// for division use "/"
	printf("here comes the division, %d\n",div);
	int rem=sum1%sum2;
	printf("here comes the reminder, %d\n",rem);
	
	
	
	return 0;
	
}

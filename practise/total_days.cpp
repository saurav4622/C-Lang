#include<stdio.h>
int main()
{
	int year;
	int day;
	int week;
	printf("enter total no. of days:");
	scanf("%d",&day);
	year=day/365;
	week=(day%365)/7;
	day=day-((year*365)+(week*7));
	printf("years:%d, weeks:%d, days:%d",year,week,day);
	return 0;
}

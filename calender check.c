#include<stdio.h>
int main()
{
    int year,basic_year=1900,leap_year,remaining_year,total_days,day;
    printf("enter the year\t");
    scanf("%d",&year);
    year = (year-1)-basic_year;
    leap_year = year/4;
    remaining_year = year-leap_year;
    total_days = (remaining_year*365)+(leap_year*366)+1;
    day = total_days%7;
    if(day==0)
        printf("monday");
   else if(day==1)
        printf("tuesday");
     else if(day==2)
        printf("wednesday");
         else if(day==3)
        printf("thursday");
         else if(day==4)
        printf("friday");
         else if(day==5)
        printf("saturday");
         else if(day==6)
        printf("sunday");
         else
        printf("wrong entry");
        return 0;
}

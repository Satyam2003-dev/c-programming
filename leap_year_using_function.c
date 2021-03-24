#include <stdio.h>
void leap(int);
int main()
{
    int year;
    printf("Enter a year to find leap year or not\n");
    
    scanf("%d", &year);
    
    leap(year);
    return 0;
}
void leap(int year)
{
    if (year % 400 == 0 || year % 100 != 0 && year % 4 == 0)
        printf("%d is leap year",year);
    else
    {
        printf("%d is not leap year",year);
    }
}

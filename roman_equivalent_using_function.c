#include <stdio.h>
int romanise(int, int, char);
int main()
{
    int yr;
    printf("enter year\t");
    scanf("%d", &yr);
    yr = romanise(yr, 1000, 'M');
    yr = romanise(yr, 500, 'D');
    yr = romanise(yr, 100, 'C');
    yr = romanise(yr, 10, 'X');
    yr = romanise(yr, 5, 'V');
    yr = romanise(yr, 1, 'I');
    return 0;
}
int romanise(int y, int k, char ch)
{
    int i, j;
    j = y / k;
    for (i = 1; i <= j; i++)
        printf("%c", ch);
    return (y - k * j);
}

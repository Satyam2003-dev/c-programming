#include <stdio.h>
int fact(int);
int main()
{
    int num;
    int factorial;
    printf("enter the number\n");
    scanf("%d", &num);
    factorial = fact(num);
    printf("factorial of %d is %ld\n", num, factorial);
    return 0;
}
int fact(int num)
{
    int i;
    int factoreal = 1;
    for (i = 1; i <= num; i++)
        factoreal = factoreal * i;
    return (factoreal);
}

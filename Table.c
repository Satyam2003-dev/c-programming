#include <stdio.h>
int main()
{
    long int i, j;
    printf("Enter the number\n");
    scanf("%ld", &j);
    printf("\n");
    for (i = 1; i <= 10; i++)
    {
        printf("%ld * %ld = %ld\n", j, i, j * i);
    }
    return 0;
}
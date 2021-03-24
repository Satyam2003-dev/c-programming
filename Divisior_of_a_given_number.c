#include <stdio.h>
int main()
{
    int a;
    int max = 1;
    scanf("%d", &a);
    for (int i = 1; i <= 10; i++)
    {
        if (a % i == 0)
            max = i;
    }
    printf("%d\n", max);
    return 0;
}
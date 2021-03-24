#include <math.h>
#include <stdio.h>
int main(void)
{
    int t, z = 1;
    scanf("%d", &t);
    while (z <= t)
    {
        int n, p;
        scanf("%d", &n);
        p = sqrt(n);
        printf("%d\n", p);
        z++;
    }
    return 0;
}
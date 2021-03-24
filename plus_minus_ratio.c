#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n, a[100], i;
    float f1 = 0, f2 = 0, f3 = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] > 0)
            f1++;
        else if (a[i] < 0)
            f2++;
        else
            f3++;
    }
    printf("%f\n%f\n%f", f1 / n, f2 / n, f3 / n);
    return 0;
}

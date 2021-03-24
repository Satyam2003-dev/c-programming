#include <stdio.h>

int main()
{
    int n;
    int a = 1, b = 2, c = 5, d = 10, e = 50, f = 100;
    int tot = 0;
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        if (n >= f)
        {
            tot = tot + n / f;
            n = n % f;
        }
        if (n >= e)
        {
            tot = tot + n / e;
            n = n % e;
        }
        if (n >= d)
        {
            tot = tot + n / d;
            n = n % d;
        }
        if (n >= c)
        {
            tot = tot + n / c;
            n = n % c;
        }
        if (n >= b)
        {
            tot = tot + n / b;
            n = n % b;
        }
        if (n >= a)
        {
            tot = tot + n / a;
            n = n % a;
        }
        printf("%d\n", tot);
        tot = 0;
    }
}

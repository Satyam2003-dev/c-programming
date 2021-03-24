#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int p = 0, c = 0, m = 0;
        char str[4];
        scanf("%s", str);
        for (int i = 0; i < 3; i++)
        {
            if (str[i] == 'P')
                p = 1;
            if (str[i] == 'C')
                c = 1;
            if (str[i] == 'M')
                m = 1;
        }
        if (p == 1 && c == 1 && m == 1)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
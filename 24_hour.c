#include <stdio.h>
int main()
{
    int h;
    for (h = 0; h < 24; h++)
    {
        if (h == 0)
        {
            printf("12 midnight\n");
            continue;
        }
        if (h < 12)
        {
            printf("%d AM\n", h);
        }
        if (h == 12)
        {
            printf("%d Noon\n", h);
        }
        if (h > 12)
        {
            printf("%d PM\n", h % 12);
        }
    }
    return 0;
}
#include <stdio.h>
int main()
{
    int i, n, lar, small, elem, range;
    printf("Enter total number of element\n");
    scanf("%d", &elem);
    printf("Enter first number\n");
    scanf("%d", &n);
    lar = n;
    small = n;
    for (i = 1; i < elem; i++)
    {
        printf("Enter next number\n");
        scanf("%d", &n);
        if (n > lar)
            lar = n;
        if (n < small)
            small = n;
    }
    printf("\nLargest number is %d ", lar);
    printf("\nSmallest number is %d ", small);
    range = lar - small;
    printf("\nRange= %d ", range);
    return 0;
}

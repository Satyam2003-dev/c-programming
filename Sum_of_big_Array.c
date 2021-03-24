#include <math.h>
#include <stdio.h>
#include <string.h>
int main()
{
    int n, sum = 0, i = 0;
    scanf("%d", &n);
    int arr[n];
    for (int arr_i = 0; arr_i < n; arr_i++)
    {
        scanf("%d", &arr[arr_i]);
    }
    while (i < n)
    {
        sum = sum + arr[i];
        i++;
    }
    printf("%d", sum);
    return 0;
}
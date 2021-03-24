#include<stdio.h>
int main()
{
    int sum,n;
    printf("Enter the number\n");
    scanf("%d",&n);
    sum=((n/2)*((n/2)+1));
    printf("Sum of even number between 1 to %d is %d\n",n,sum);
    return 0;
}
#include <stdio.h>
int main()
{
    int a,b,sum,diff;
    float c,d,sum1,diff1;
    scanf("%d %d",&a,&b);
    scanf("%f %f",&c,&d);
    sum=a+b;
    diff=a-b;
    sum1=c+d;
    diff1=c-d;
    printf("%d %d\n",sum, diff);
    printf("%0.1f %0.1f",sum1, diff1);
    return 0;
}

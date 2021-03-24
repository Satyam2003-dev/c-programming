#include<stdio.h>
int main()
{
    int qty,dis;
    float rate,total;
    printf("enter quantity and rate\t");
    scanf("%d %f",&qty,&rate);
    if(qty>1000)
        dis=10;
    else
        dis=0;
    total=(qty*rate)-(qty*rate*dis/100);
    printf("total expense =Rs %f\n",total);
    return 0;
}

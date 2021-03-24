#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter two no\n");
    scanf("%d %d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("after swapping the no is %d %d",a,b);
    return 0;
}

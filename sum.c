#include<stdio.h>
int main()
{
    int sum=0,n,temp=0;
    printf("enter the number\n");
    scanf("%d",&n);
    while(n>0)
    {
        temp=n;
        temp=n%10;
        sum+=temp;
        n=n/10;
    }
     printf("sum of digit is %d",sum);
     return 0;
}

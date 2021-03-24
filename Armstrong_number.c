#include<stdio.h>
int main()
{
    int num,rem,q,sum=0,i;
    printf("armstrong number between 1 to 1000 are\n");
    for(i=1;i<=1000;i++)
    {
        num=i;
        sum=0;

        while(num>0)
        {
            rem=num%10;
            q=rem*rem*rem;
            sum=sum+q;
            num=num/10;
        }
        if(sum==i)
        {
            printf("%d\n",sum);
        }
    }
    return 0;
}

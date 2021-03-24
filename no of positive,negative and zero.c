#include<stdio.h>
int main()
{
    int num,limit,pos=0,neg=0,zero=0;
    printf("enter the limit\n");
    scanf("%d",&limit);
    printf("enter %d number\n",limit);

    while(limit)
    {
        scanf("%d",&num);
        if(num>0)
        {
            pos++;
        }
        else if(num<0)
        {
            neg++;
        }
        else
        {
            zero++;
        }
        limit--;

    }
    printf(" total number of positive number= %d\n total number of negative number= %d \n total number of zero = %d ",pos,neg,zero);
    return 0;
}

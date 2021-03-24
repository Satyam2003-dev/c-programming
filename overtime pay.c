#include<stdio.h>
int main()
{
    float otpay;
    int hour,i=1;
    while(i<=10)
    {
        printf("\n enter no of hour worked ");
        scanf("%d",&hour);
        if(hour>=40)
            otpay=(hour-40)*12;
        else
            otpay=0;
        printf("hours=%d overtime pay =rs %f \n",hour,otpay);
        i++;
    }
    return 0;
}

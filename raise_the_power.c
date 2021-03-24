#include<stdio.h>
int main()
{
    float x,y,power;
    int i;
    printf(" enter two number\n");
    scanf("%f%f",&x,&y);
    power = i = 1;
    while(i<=y)
    {
        power =power*x;
        i++;
    }
    printf("%f to the power %f is %f \n",x,y,power);
    return 0;
}

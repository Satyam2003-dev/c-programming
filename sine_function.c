#include<stdio.h>
#include<math.h>
int main()
{
      double value,num;
      printf("Enter the value\n");
      scanf("%lf",&num);
      value=sin(num);
      printf("value of sin id %lf = %f",num,value);
      return 0;
}
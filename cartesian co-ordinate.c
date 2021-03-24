#include<stdio.h>
#include<math.h>
int main()
{
    int x,y;
    float r,t;
    printf("enter the number in cartesian co-ordinates(x,y)\n");
    scanf("%d %d",&x,&y);
    r=sqrt(x*x+y*y);
    t=atan(y/x);
    t=180.0*t/3.14;
    printf("point in polar co-ordinate is%0.2f %0.2f",r,t);
    return 0;
}

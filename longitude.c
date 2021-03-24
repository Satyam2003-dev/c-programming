#include<stdio.h>
#include<math.h>
int main()
{
    float l1,l2,g1,g2,distance;
    printf("enter the value of lattitude and longitude\n");
    scanf("%f %f %f %f",&l1,&l2,&g1,&g2);
    distance=3969*acos(sin(l1)*sin(l2)+cos(l1)*cos(l2)*cos(g1-g2));
    printf("distance in nautical mile=%f",distance);
    return 0;
}

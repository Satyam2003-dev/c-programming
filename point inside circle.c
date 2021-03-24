#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,r,a,b,distance;
    printf("enter circle centre point\n");
    scanf("%d %d",&x,&y);
    printf("enter radius of circle\n");
    scanf("%d",&r);
    printf("enter the point\n");
    scanf("%d %d",&a,&b);
    distance=sqrt(pow((a-x),2)+pow((b-y),2));
    if(distance<r)
        printf("point is inside the circle\n");
    else if(distance>r)
        printf("point is outside the circle");
    else
        printf("point is on the circle\n");
    return 0;

}

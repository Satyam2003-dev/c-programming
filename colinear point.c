#include<stdio.h>
int main()
{
    int x1,x2,x3,y1,y2,y3;
    printf("enter the point\n");
    scanf("%d %d %d %d %d %d\t",&x1,&x2,&x3,&y1,&y2,&y3);
    if(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2)==0)
        printf("point are collinear\n");
    else
        printf("point are non collinear\n");
    return 0;
}

#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,small;
    printf("enter side of triangle\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a == b == c)
        printf("triangle is equilateral\n");
    else if(a==b || b==c || a==c)
        printf("triangle is isoscells\n");
    else
        if(a*a + b*b==c*c||a*a + c*c==b*b||b*b + c*c==a*a)
        printf("triangle is right angle triangle\n");
    else
        printf("triangle is scalen triangle\n");
    return 0;
}

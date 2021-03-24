#include<stdio.h>
int swap(int **,int *,int **);
int main()
{

    int x=5,y=8,z=10;
    swap(*&x,&y,*&z);
    printf("%d %d %d",x,y,z);
    return 0;
}
int swap(int **x,int *y,int **z)
{
    int temp1,temp2;
    temp1=&y;
    temp2=&z;
    y=&x;
    z=&temp1;
    x=&temp2;
}

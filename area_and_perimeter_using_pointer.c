#include<stdio.h>
void areaperi(int,float*,float*);
int main()
{
   int radius;
   float area,peri;
   printf("Enter the radius of circle\n");
   scanf("%d",&radius);
   areaperi(radius,&area,&peri);
   printf("area=%f\n",area);
   printf("perimeter = %f\n",peri);
   return 0;
}
void areaperi(int r,float *a,float*p)
{
    *a=3.14*r*r;
    *p=2*3.14*r;
}
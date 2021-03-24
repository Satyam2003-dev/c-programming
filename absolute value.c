#include<stdio.h>
int main()
{
    int n;
    printf("enter the no\n");
    scanf("%d",&n);
    if(n>=0) {
        n=n*1;
        printf("absolute no is %d\n",n);
        }

    else  if(n<0){
    n=n*(-1);
    printf("absolute no is %d",n);}
    return 0;
}

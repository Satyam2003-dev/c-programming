#include<stdio.h>
int main()
{   
    int m;
    scanf("%d",&m);
    while(m--)
    {
    long int num,i,fact;
    printf("enter the number\t");
    scanf("%ld",&num);
    fact=i=1;
    while(i<=num)
    {
       fact=fact*i;
       i++;
    }
    printf("Factoreal = %ld \n",fact);
    }
    return 0;
}

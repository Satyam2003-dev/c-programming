#include<stdio.h>
int main()
{
    int var=20;
    int *ip;
    ip=&var;
    printf("Address of var variable %p\n",&var);
    printf("Addres stored in ip variable %p\n",ip);
    printf("value of*ip variable %d\n",*ip);
    return 0;
}
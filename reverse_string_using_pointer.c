#include<stdio.h>
int main()
{
    char str[100];
    char rev[100];
    char *sptr = str;
    char *rptr =rev;
    int i=-1;
    printf("Enter any  string\n");
    scanf("%s",str);
    while(*sptr)
    {
        sptr++;
        i++;
    }
    while(i>=0)
    {
        sptr--;
        *rptr = *sptr;
        rptr++;
        --i;
    }
    *rptr = '\0';
    printf("Reverse of string is:- %s",rev);
    return 0;
}
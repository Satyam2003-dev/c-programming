#include<stdio.h>
int main()
{
    char ch;
    printf("enter a character from the keyboard\n");
    scanf("%c",&ch);
    if(ch>=65 && ch<=90)
        printf("character is uppercase letter\n");
    if(ch>=97 && ch<=122)
        printf("character is lowercase letter\n");
    if(ch>=48 && ch<=57)
        printf("character is digit\n");
    if((ch>=0 &&ch<48)||(ch>57 && ch<65)||(ch>90 && ch<97)|| ch>122)
        printf("character is special symbol\n");
    return 0;
}

#include<stdio.h>
int main()
{
    int age;
    char sex,ms;
    printf("enter age , sex(M=male,F=female) , marital status(U=unmarried)\n");
    scanf("%d%c%c\n",&age,&sex,&ms);
    if((ms=='M')||(ms=='U'&&sex=='M'&&age>30)||(ms=='U'&&sex=='F'&&age>25))
        printf("Driver should be insured\n");
    else
        printf("driver should not be insured\n");
    return 0;
}

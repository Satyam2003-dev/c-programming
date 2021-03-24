#include<stdio.h>
int main()
{
    int i,class,fail,grace;
    printf("enter your choice and class andd no of subject fail\n");
    scanf("%d %d %d",&i,&class,&fail);
    switch(i)
    {
        case 1:
        if(class==1 && fail>3)
        grace=0;
        else
        {
            grace=5;
        }   
        printf("grace marks per subject=%d",grace);
        break;
        case 2:
        if(class==2 && fail>2)
        grace=0;
        else
        {
            grace=4;
        }
        printf("grace marks per subject = %d",grace);
        break;
        case 3:
        if(class==3 && fail>1)
        grace=0;
        else
        {
            grace=5;
        }
        printf("grace marks per subject =%d",grace);
         break;
    }
    return 0;
}
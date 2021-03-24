#include <stdio.h>
int main()
{
    int a,b,n=21;
    printf("Rule of GAME:-\n 1:- there are 21 matchsticks \n 2:- you can pick maximum only 4 \n 3:- who pick last matchstick lost the game \n 4:- you can't QUIT the game in middle\n");
    while (n>1)
    {
        printf("enter the number of matchstick you want to pick between 0 to 4\n");
        scanf("%d",&a);
        n=n-a;
        printf("left  matchsticks are %d\n",n);
        b=5-a;
        printf("computer picks %d\n",b);
        n=n-b;
        printf("left matchsticks= %d\n",n);
    }
    if(n==1)
    printf("You lost. Better luck next time");
    return 0;
}

#include <stdio.h>

int main(void)
{
    int n,a,b,c,sl;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d %d %d",&a,&b,&c);
        if((a>=b && a<=c)||(a>=c && a<=b))
        {
         sl=a;   
        }
        else if((b>=a  && b<=c)||(b>=c && b<=a))
        {
            sl=b;
        }
        else 
        sl=c;
        printf("%d\n",sl);
    }
	return 0;
}


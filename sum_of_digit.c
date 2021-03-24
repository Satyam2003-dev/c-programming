#include <stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
	int i;
	for(i=1;i<=t;i++)
	{
	    int a;
	    scanf("%d",&a);
	    int d,s=0;
	    while(a>0)
	    {
	        d=a%10;
	        s=s+d;
	        a=a/10;
	    }
	    printf("%d \n",s);
	}
	return 0;
}


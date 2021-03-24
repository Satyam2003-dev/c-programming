#include <stdio.h>

int main(void) 
{
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
	{
	    int a,rev=0;
	    scanf("%d",&a);
	    while(a>0)
	    {
	        int num=a%10;
	        rev=rev*10+num;
	        a/=10;
	    }
	    printf("%d\n",rev);
	    
	}
	return 0;
}

#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
	    int a,k,s;
	    scanf("%d %d",&s,&k);
	    a=s-k;
	    if(a>k)
	    {
	    a=a-k;
	    printf("%d\n",a);
	    }
	    else
	    if(s<k)
	    {
	    printf("%d\n",s);
	    }
        else 
        if(s==k)
        {
            a=s-k;
         printf("%d\n",a);
        }
	}
	return 0;
}


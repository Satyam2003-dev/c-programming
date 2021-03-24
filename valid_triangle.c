#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	while(n)
	{
	   int a,b,c,sum;
	   
	   scanf("%d %d %d",&a,&b,&c);
	   sum=a+b+c;
	   if(sum==180)
       {
	   printf("YES\n");
       } 
       else
	   printf("NO\n");
	   n--;
	}
	return 0;
}


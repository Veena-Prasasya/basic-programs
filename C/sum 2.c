#include <stdio.h>
int main()
{
		int a=1,b=1,c,d=150;
		printf("%d\n",a);
		printf("%d\n",b);
		c=a+b;
		while(c<=d)
		{
			printf("%d\n",c);
			a=b;
			b=c;
			c=a+b;
		}
		return 0;	
}

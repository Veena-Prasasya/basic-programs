#include <stdio.h>
int main()
{
	int a;
	printf("Even numbers\n");
	a=2;
	do
	{	
		printf("%d\n",a);
		a=a+2;
	}while(a<=50);
	printf("Odd numbers\n");
	a=1;
	do
	{
			printf("%d\n",a);
			a=a+2;
	}while(a<=50);
}

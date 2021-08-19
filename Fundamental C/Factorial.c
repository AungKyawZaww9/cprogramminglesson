#include <stdio.h>
int factorial (int a);
int main (void)

{
	int a;
	printf("Enter a number");
	scanf("%d",&a);
	
	int b = factorial (a);
	printf("the factorial is %d",b);
	
	
	
	return 0;
}
int factorial (int b)
{
	
	if(b==0 || b==1 )return 1;
	else return factorial (b-1)*b;
	
	
}

#include<stdio.h>
int main (void)
{
	int x=2;
	int y=2;
	int r=2;
	int z=(x+y)*(y+r);//16
	
	printf("%d",z);
	
	z=(x*y)-(x*r);//0
	
	printf("\n%d",z);
	
	
	
	
	
	return 0;
}

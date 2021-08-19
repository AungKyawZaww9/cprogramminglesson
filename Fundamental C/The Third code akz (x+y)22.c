#include<stdio.h>
int main (void)
{
	int x,y;
	printf("write the first number:");
	scanf("%d,&x");
	
	printf("\nwrite the second number:");
	scanf("%d,&y");
	
	x+=y;
	
	printf("\nthe answer is:%d",x);
	
	
	return 0;
}

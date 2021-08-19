#include <stdio.h>
int square (int);
int main (void)

{
	int a;
	printf("Enter the number:");
	scanf("%d",&a);
	
	
	printf("\n The result is %d",square (a));//********
	
	
	return 0;
}
int square (int b)
{ 
return (b*b);//************
}

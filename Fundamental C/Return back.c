#include <stdio.h>
int square (int);
int main (void)

{
	int a;
	printf("Enter the number:");
	scanf("%d",&a);
	
	int z = square(a);//*********
	printf("\n The result is %d",z);//********
	
	
	return 0;
}
int square (int b)
{ 
return (b*b);//************
}


// don't use the variable not problem
//We can solve that type
//
//	printf("\n The result is %d",square (a));

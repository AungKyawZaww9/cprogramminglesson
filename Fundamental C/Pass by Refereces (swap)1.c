#include <stdio.h>

void swap(int&,int&);

int main(void)

{
	int x =10;
	int y =20;
	 
	printf("Before swap : %d,%d",(x,y));
	
	swap(x,y);
	printf("\nAfter swap : %d,%d",(x,y));
	
	return 0;
}
void swap(int& a, int& b)
{
	int tmp=b;
	a = b;
	b = tmp;
	
	
	
	
}

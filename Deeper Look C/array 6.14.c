#include<stdio.h>
void trytomodifyarray( const int b[]);

int main(void)
{
	
	int a[] = {10, 20, 30};
	
	trytomodifyarray (a);
	
	printf("%d %d %d\n", a[0], a[1], a[2]);
	
		
	
	return 0;
}

void trytomodifyarray( const int b[])
{
	b[0] /= 2;
	b[1] /= 2;
	b[2] /= 2;	
}

#include<stdio.h>
#define size 6
int main(void)

{
	int s[size] = {99,88,77,66,55};
	int i;
	int j;
	
	printf("%s%13s%17s","Element","Value", "Quantity");
	
	for(i=0; i<size; i++)
	
		{
		
		printf("%7d%13d", i, s[i]);
		
	for ( j = 1; j <= s[ i ]; j++ )
		
	
		{	
			printf("%c","*");
		}
		
		printf("\n");
	
		}
	return 0;
}

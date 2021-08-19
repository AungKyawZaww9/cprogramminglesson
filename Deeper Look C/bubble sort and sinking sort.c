#include<stdio.h>
#define size 10
int main(void)

{
	int a[size] = {2,3,4,5,6,7,8,999,66,77};
	int pass;
	int i;
	int hold;
	
	printf("\nData itemas in original order");
	
	for(i=0; i<size; i++)
	{
		printf("%4d",a[i]);
	}
	
	for(pass=0; pass<size; pass++)
	{
		for(i=0; i<size-1; i++)
		{
			if( a[i] > a[i+1] )
			{
				hold = a[i];
				a[i] = a[i+1];
				a[i+1] = hold;
			}
			
		}
	}
	
	printf("\nData items in ascending order\n");
	
	for(i=0; i<size; i++)
	{
		printf("%4d",a[i]);
	}
	
	printf("\n");
	
	
	
	
	
	return 0;
	
}

#include<stdio.h>
void staticArrayInit(void);
void automaticArrayInit(void);
int main(void)
{
	
	printf("\nFirst call to each function: ");
	staticArrayInit();
	automaticArrayInit();
	
	printf("\nSecond call to each function: ");
	staticArrayInit();
	automaticArrayInit();
	
	
	return 0;
}

void staticArrayInit(void)
{
	
	static int array1[3];
	int i;	
	
	printf("\nValues on entering staticArrayInit:");
	for (i = 0; i <= 2; i++ )
	{
		printf("array1[%d] = %d ",i,array1[i]);
	}
	
	printf("\nValues on exiting staticArrayInit:");
	
	for(i=0; i<=2; i++)
	{
		printf("array1[%d] = %d ",i, array1[i] += 5);
	}
	
		
}
	
void automaticArrayInit(void)
	{
		int array2[3] = {1,2,3};
		int i;
		
		
		printf("\nValues on entering automaticArrayInit:");
		
		for(i=0; i<=2; i++)
		{
			printf("array2[%d] = %d",i,array2[i]);
		}
		
		
		printf("\nValues on entering automaticArrayInit:");
		
		for(i =0; i<=2; i++)
		{
			printf("array2[%d] = %d",i, array2[i] += 5);
		}
		
		
	}
	
		


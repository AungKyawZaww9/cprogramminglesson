#include<stdio.h>
#define SIZE 100
int linearSearch(const int array[], int key, int size);
int main(void)

{
	
	int a[SIZE];
	int x;
	int searchkey;
	int element;
	
	
	for(x = 0; x < 	SIZE; x++)
	{
		a[x] = 2*x;
	}
	
	printf("Enter inter search key:\n");
	scanf("%d",&searchkey);
	
	element = linearSearch(a, searchkey, SIZE);
	
	if (element != -1)
	{
		printf("\nFound value in element %d",element);
	}
	
	else
	{
		printf("\nValue not found");
	}
	
	
	return 0;
}

int linearSearch(const int array[], int key, int size)
{
	int n;
	for (n=0; n<size; ++n)
	{
		if (array[n] == key)
		{
		
			return n;
		}
	}
	
	return -1;
}	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	


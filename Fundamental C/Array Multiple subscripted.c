#include<stdio.h>

void printCar (const int a[][3]);
int main(void)

{
	
	int car1[2][3] = {{1,2,3},{4,5,6}};
	int car2[2][3] = {1,2,3,4,5};
	int car3[2][3] = {{1,2},{4}};
	
	printf("Values in car by row are:\n");
	printCar(car1);
	printf("\n");
	
	printf("Values in car by row are:\n");
	printCar(car2);
	printf("\n");
	
	printf("Values in car by row are:\n");
	printCar(car3);
	printf("\n");
	
	return 0;
}


void printCar (const int a[][3])
{
	int i;
	int j;
	
	for (i =0; i<= 1; i++)
	{
			for(j=0; j<=2; j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	
	
}

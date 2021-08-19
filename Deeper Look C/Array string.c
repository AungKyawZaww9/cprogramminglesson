#include<stdio.h>

int main(void)
{
	char Kyaw[50];
	char Zaww[] = "aung";
	int i;
	
	printf("Enter Your Name");
	scanf("%s",&Kyaw);
	
	printf("Kyaw is: %s\nZaww is: %s\n");
	
	for ( i = 0; Kyaw[ i ] != '\0'; i++ ) 
	{
	printf( "%c ", Kyaw[ i ] );
	}
	
	printf("\n");
	
	
	return 0;
}

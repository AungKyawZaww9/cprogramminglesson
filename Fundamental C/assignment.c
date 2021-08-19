#include<stdio.h>
int main (void)
{
	int oil,salt,counter;
	printf("The oil price is:");
	scanf("%d",&oil);
	
	
	printf("The salt price is:");
	scanf("%d",&salt);
	
	counter=salt+oil;
	
	printf("Total price are: %d",counter);
	
	if(salt>oil)
	{printf("\nThis is so expensive");
	}
	else if(salt<oil)
	{printf("\nThat is great");
	}
	else
	printf("\ngood");
	
	

	
	
	
	
	return 0;
}

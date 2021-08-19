#include <stdio.h>
int main (void)

{
	int min,i,j;
	char (ch);
	
	
	do{
		
		printf("\nthe enteger of i:");
		scanf("%d",&i);
		
		printf("\nthe enteger of j:");
		scanf("%d",&j);
		
		
		min=(i<j) ? i:j;
		printf("\nthe minmem number is %d",min);
		printf("\nDo you wanna try more:(y,n)");
		scanf("%s",&ch);
	}while(ch!='n');
	printf("Thank you");
	
	
	
	
	return 0;
}

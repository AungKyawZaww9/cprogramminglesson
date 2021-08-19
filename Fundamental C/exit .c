#include <stdio.h>
int main (void)
{
	int a;
	char ch;
		
		do{	
			printf("\nEnter a integer:");
			scanf("%d",&a);
			
			if(a==0)
			exit(0);
			
			printf("you entered %d",a);
			
			printf("\n\nDo you wanna try more(y,n)");
			scanf("%s",&ch);
		}while(ch!='n');
		printf("Thank you");
	
	return 0;
}

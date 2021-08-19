#include<stdio.h>
int main(void)
{
	int K,Z;
	char number;
	char ch;
	do{
	
	
		printf("\nenter the number");
		scanf("%c",&number);
		
		
		printf("\nNumber One :");
		scanf("%d",&K);
		
		printf("\nNumber Two :");
		scanf("%d",&Z);
		
	
		
			switch(number)
		{
		case '+': printf("\nthe result is: %d",K+Z);break;
		case '-': printf("\nthe result is: %d",K-Z);break;
		case'*':printf("\nthe result is:",K*Z);break;
		
		default:printf("\nI can't ");
		}
		
		
		printf("\nPlease: (y/n):");
		scanf("%s",&ch);
		
	}while(ch!='n');
	printf("Thanks ");
	
	
		
	
	
	return 0;
}

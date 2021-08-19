#include<stdio.h>
int main(void)
{
	int K,Z;
	char number;
	

	
	printf("\nenter the operator :");
	scanf("%c",&number);
	
	
	printf("\nNumber One :");
	scanf("%d",&K);
	
	printf("\nNumber Two :");
	scanf("%d",&Z);
	

	
	switch(number)
	{
	case '+': printf("the result is: %d",K+Z);break;
	case '-': printf("the result is: %d",K-Z);break;
	case'*':printf("the result is:",K*Z);break;
	
	default:printf("\nI can't ");
	}
	
	return 0;
}



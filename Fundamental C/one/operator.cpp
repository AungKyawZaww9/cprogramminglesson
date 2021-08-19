#include<stdio.h>
int main (void)
{
	int a,b;
	char counter;
	
	printf("Enter the a number:");
	scanf("%d",&a);
	
	printf("Enter the b number:");
	scanf("%d",&b);
	
//	printf("Enter the counter:");
//	scanf("%s",&counter);
	
	
	counter=(a*b)+a-b; //operator
	
	printf("\nTotal price are: %d",counter); // total result
	
		if(a<b)
		{printf("\nthe result is great:");
		}
	
		else if(counter>a)
		{printf("\nthe result is good:");
		}
		
		else if(b>counter)
		{printf("\nthe result is'nt bad'");
		}
		
		else if(b==a)
		{printf("\nthe result is not good");
		}
		
		else if(a=!b)
		{printf("\nthe result is cheap:");
		}
		
		else
		{printf("\nYou cannot find the result:");
		printf("\nThank you");
		}
	return 0;
}

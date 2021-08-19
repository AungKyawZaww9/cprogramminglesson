#include<stdio.h>
int main (void)
{
	int a,b;
	char counter;
	
	printf("Enter the number:");
	scanf("%d",&a);
	
	printf("Enter the number:");
	scanf("%d",&b);
	
	printf("Enter the counter:");
	scanf("%s",&counter);
	
	counter=(a*b)+a-b; //operator
	if(a<b)
	{printf("the result is great:");
	}

	else if(counter>a)
	{printf("the result is good:");
	}
	
	else if(b>counter)
	{printf("the result is'nt bad'");
	}
	
	else if(b==a)
	{printf("the result is not good");
	}
	
	else if(a=!b)
	{printf("the result is cheap:");
	}
	
	else
	{printf("You cannot find the result:");
	printf("Thank you");
	}
	return 0;
}

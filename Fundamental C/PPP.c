#include <stdio.h>
int main(void)
{
	int a,b,c;
	char opr;
	char ch;
	do{
			
			printf("enter a number: ");
			scanf("%d",&a);
			
			printf("enter a number: ");
			scanf("%d",&b);
			
			printf("enter a number: ");
			scanf("%d,",&c);
			
			opr=(a*b)+a+(c*b);
			printf("the result is: %d",opr);
			
			
			if (opr==10)//2 2 2
			{printf("\nthe result is good");
			}
			else if(opr<10) // 1 1 1 
			{printf("\n the result is normal");
			}
			else if(opr>10)//5 5 5
			{
			printf("\nthe result is higher");
			}
			else if(opr==1000)// as you like
			{printf("\n The result is infintity");
			}
			else 
			printf("\nsorry, I can't effort it!");
			
			printf("Do you want to try more (y,n) : %c",ch);
			
		}while (ch=!'n');
	printf("\nThank you");
	return 0;
}

#include<stdio.h>
void printsqr (int); //decleration
void one(); //declearation
int main(void)

{
	int i;
	printf("Enter the number :");
	scanf("%d",&i);
	
	printsqr(i);// invoking
	
	printf("\n\n");
	
	one();//invoking
	return 0;
}


void printsqr (int n) // definaion
{
		
	printf("\nThe square is :%d",(n*n));
	
	
}

//defination
void one(){
	printf("great");
}

#include<stdio.h>

int main(void)

{
	
	int age;
	printf("Enter age");
	scanf("%d",&age);
	
	if(age>22 && age>8)
	{printf("it is child");
	}
	
	else if(age<10 || age<12)
	{printf("\nIt is true");
	}
	
	else
	printf("\ngood luck");
	return 0;
}

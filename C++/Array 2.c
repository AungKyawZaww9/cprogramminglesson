#include<stdio.h>
#include<conio.h>
int main(void)

{
	int n[7] = {5,4,3,2,1,8,9};
	int i;
	printf("%s%13s\n","Element"," value");
	for(i=0; i<7; i++)
	{
		
	printf("%4d%9d\n",i,n[i]);
	
	}
	
	return 0;
}


/*#include<stdio.h>
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



#include<stdio.h>
#define size 10
int main(void)
{
	int s[size];
	int j;
	
	for(j=0; j<size; j++)
	{
	s[j] = 2+2 *j;
	}
	
	printf("%s%13s\n","Element", "value");
	
	for(j=0; j<size; j++)
	{
		printf("%7d%9d\n",j,s[j]);
		
	}
	
	return 0;
}

*/



#include<stdio.h>
#define size 12
int main(void)
{
	int s[size] = {1,2,3,4,5,6,7,8,9,10,11,12};
	int i;
	int total = 0;
	for(i=0; i<size; i++)
	{
		total +=s[i];
	}
	
	printf("Total array %d",total);
	
	return 0;
}































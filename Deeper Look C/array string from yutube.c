#include<stdio.h>
#include<stdlib.h>
#include<string.h>



int main(int argc, char * argv[])
{
	char array[3][50];
	
	
	strcpy(array[0],"Helllo world");
	strcpy(array[1],"Test");
	strcpy(array[2],"123");
	printf("String are: \n%s\n%s\n%s\n", array[0], array[1], array[2]);
//	printf(array[0,1,2]);
}

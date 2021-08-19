#include <stdio.h>
int main(void)

{
	char ch= 'y';
	
	switch(ch)
	{
		case 'a': printf("it is a boy");break;
		case 'b': printf("it is a girl");break;
		case 'c': printf("it is a dog");break;
		default: printf("you cannot fine the world");break;
	}
	
	return 0;
}

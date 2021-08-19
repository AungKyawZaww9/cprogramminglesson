include <stdio.h>

int main(void)
{
	int z;
	printf("enter char: ");
	scanf("%s",&z);
	switch(z)
	{
		case 'b': printf("U R 'boy' ");break;
		case 'g': printf("U R 'girl' ");break;
		default: printf("U R gay.");break;
	}
	
	return 0;
}


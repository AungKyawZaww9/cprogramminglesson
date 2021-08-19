#include <stdio.h>

int main()
{
int columns, rows, number;
rows =1;

do{
    columns=0;
    do{
        printf("%d\t ", columns*10+rows);
        
      }while(columns++ <9);
    	printf("\n");
    
}while(rows++ <10);

    return 0;
}

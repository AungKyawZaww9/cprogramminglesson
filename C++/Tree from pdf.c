#include<stdio.h>
#include<stdlib.h>
#include<time.h>
struct TN{
	struct TN *leftptr;
	int data;
	struct TN *rightptr;
	
};
typedef struct TN TN1;
typedef TN1 *TN1ptr;

void insertnode(TN1ptr *Tptr, int value);
void inorder(TN1ptr Tptr);
void preorder(TN1ptr Tptr);
void postorder(TN1ptr Tptr);

int main(void)
{
	int i;
	int item;
	TN1ptr rootPtr = NULL;
	srand(time(NULL));
	printf("The number being placed int heare:\n");
	
	for(i = 1; i<= 10; i++)
	{
		item = rand() % 15;
		printf("%3d", item);
		insertnode(&rootPtr, item);
	}
	printf( "\n\nThe preOrder traversal is:\n" );	
	preorder( rootPtr );
	
	printf( "\n\nThe inOrder traversal is:\n" );
	inorder( rootPtr );
	
	printf( "\n\nThe postOrder traversal is:\n" );
	postorder( rootPtr );
	
	return 0;
}
void insertnode(TN1ptr *Tptr, int value)
{
	if(*Tptr == NULL)
	{
		*Tptr == malloc(sizeof(TN1));
		
		if(*Tptr != NULL)
		{
			(*Tptr)->data = value;
			(*Tptr)->leftptr =NULL;
			(*Tptr)->rightptr =NULL;
		}
		else{
			printf("%d not inserted. NO memory available.\n",value);
		}
	}
	else{
		if(value < (*Tptr)->data){
			insertnode(&((*Tptr)->leftptr),value);
		}
		else if(value>(*Tptr)->data){
			insertnode(&((*Tptr)->rightptr),value);
		}
		else{
			printf("dup");
		}
	}
}
void inorder(TN1ptr Tptr)
{
	if(Tptr != NULL){
		inorder(Tptr->leftptr);
		printf("%3d",Tptr->data);
		inorder(Tptr->rightptr);
	}
}
void preorder( TN1ptr Tptr )
{
	if(Tptr != NULL){
		printf("%3d",Tptr->data);
		preorder(Tptr->leftptr);
		preorder(Tptr->rightptr);
	}
}

void postorder( TN1ptr Tptr )
{
	if(Tptr != NULL){
		postorder(Tptr->leftptr);		
		postorder(Tptr->rightptr);
		printf("%3d",Tptr->data);
	}
}









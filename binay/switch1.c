#include<stdio.h>

struct node
{
	int item;
	struct node *nextnode;
}
typedef struct node NOD;
NOD *start= NULL;
int main()
{
	int choice;
	do
	{
	printf("press 1 to insert, 2 to delete, 3 to display, 4 to exit: ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("you have to insert");
			break;
		case 2:
			printf("you have to delete");
			break;
		case 3:
			printf("you have to display");
			break;
		default:
			printf("you are wrong");
	}

	}while(choice != 4)
}

void insertthebegining(int data)
{
	NOD newnode;
	newnode = (NOD*)malloc(sizeof(NOD));
	newnode->next = start;


			



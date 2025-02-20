#include<stdio.h>
int main()
{
	int choice;
	char ch;
	do{
	printf("Enter 1 for facebook, 2 for tik tok, 3 for freefire: ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("you choose facebook\n");
			break;
		case 2: 
			printf("you choose tik tok\n");
			break;
		case 3:
			printf("you play free fire\n");
			break;
		default:
			printf("you are lazy\n");
	}
	printf("Do you want to choose again ?\n " );
	scanf(" %c",&ch);
	}
	while(ch =='y' || ch =='Y');
	return 0;
}


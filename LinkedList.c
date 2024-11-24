#include<stdio.h>

struct Node {
    int data;
    struct Node *Next;
};
struct  Node *start = NULL;
struct Node *insert_at_beg(struct Node *)
int main () {
    int choice;
    char ch;
    do
    {
        printf("\n 1. Enter the value of first Node");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1 
            start = insert_at_beg(start);
            break;
        
        default:
            break;
        }
    printf("\n do you wants to continue (y/n)");
    scanf("%d",&ch);
    ch=getch();    
    } while (ch='y');
    
    
    return 0;
}

struct Node *insert_at_beg(struct Node *start)
{
	struct Node *temp;
	temp=(struct Node*)malloc(sizeof(struct Node));
	printf("\nEnter the data in Node");
	scanf("%d",&temp->info);
	if(start==NULL)
	{
		start=temp;
		start->next=NULL;
		printf("\nIt is our First Node");
	}
	else
	{
		temp->next=start;
		start=temp;
	}
	// printList(start);
	return start;
}

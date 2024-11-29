#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct Node {
    int data;
    struct Node *Next;
};
struct  Node *start = NULL;
struct Node *insert_at_beg(struct Node *);
struct Node *insert_at_end(struct Node *);
struct Node *insert_at_loc(struct Node *);
int main () {
    int choice;
    char ch;
    do
    {
        printf("\n 1. Enter the value of first Node");
        printf("\n 2. Insert At Ending");
        printf("\n 2. Insert At loc");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1 :
            start = insert_at_beg(start);
            break;
        case 2 : 
            start=insert_at_end(start);
            break;
        case 3 : 
            start=insert_at_loc(start);       
        default:
            break;
        }
    printf("\n do you wants to continue (y/n)");
    scanf("%d",&ch);
    ch=getch();    
    } while (ch='y');
}

struct Node *insert_at_beg(struct Node *start)
{
	struct Node *temp;
	temp=(struct Node*)malloc(sizeof(struct Node));
	printf("\nEnter the data in Node");
	scanf("%d",&temp->data);
	if(start==NULL)
	{
		start=temp;
		start->Next=NULL;
		printf("\nIt is our First Node");
	}
	else
	{
		temp->Next=start;
		start=temp;
	}
	// printList(start);
	return start;
}
struct Node *insert_at_end(struct Node *start)
{
    struct Node *temp;
	temp=(struct Node*)malloc(sizeof(struct Node));
	printf("\nEnter the data in Node");
	scanf("%d",&temp->data);
	if(start==NULL)
	{
		start=temp;
		start->Next=NULL;
		printf("\nIt is our First Node");
	}
    else
    {
        struct Node *ptr;
        while(ptr->Next!=NULL)
        {
            ptr=ptr->Next;
        }
        ptr->Next=temp;
        temp->Next=NULL;
    }
    return start;
}

struct Node *insert_at_loc(struct Node *start)
{
    struct Node *temp;
	temp=(struct Node*)malloc(sizeof(struct Node));
	printf("\nEnter the data in Node");
	scanf("%d",&temp->data);
	if(start==NULL)
	{
		start=temp;
		start->Next=NULL;
		printf("\nIt is our First Node");
	}
    else 
    {
        int index;
        printf("\nEnter the Index");
	    scanf("%d",&index);
        struct Node *ptr;
        int i = 0;
        while(i!=index-1)
        {
            ptr=ptr->Next;
        }
        ptr->Next=temp->Next;
        ptr->Next=temp;
    }
    return start;
}
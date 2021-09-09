#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node *createNode(int item){
	struct node *n = (struct node *)malloc(sizeof(struct node));
	n->data = item;
	
	return n;
}

void Traversal(struct node *ptr)
{
	while(ptr != NULL)
	{
		printf("%d ", ptr->data);
		ptr = ptr->next;
	}
}


int main()
{
	struct node *First = createNode(2);
	struct node *Second = createNode(56);
	struct node *Third = createNode(9);
	struct node *Fourth = createNode(89);
	struct node *Fifth = createNode(23);
	
	First->next = Second;
	Second->next = Third;
	Third->next = Fourth;
	Fourth->next = Fifth;
	Fifth->next = NULL;
	
	Traversal(First);
	
	
	
}

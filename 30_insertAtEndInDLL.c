// Write temp program in C to insert An element At end in Doubly LinkedList
#include <stdio.h>
#include <malloc.h>

typedef struct Node
{
    int info;
    struct Node *next, *pre;
};

struct Node* insertAtEnd(struct Node*head)
{
    struct Node*newNode;
    newNode = (struct Node*)malloc(sizeof(newNode));
    printf("\nEnter value for linkedList\n");
    scanf("%d",&newNode->info);
    newNode->next = NULL;
    newNode->pre = NULL;

    if(head == NULL)
        return newNode;
    struct Node*temp;
    temp = head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->pre = temp;
    return head;
}
void printLinkedList(struct Node*head)
{
    if(head == NULL)
    {
        printf("\nLinked List is Empty \n");
        return;
    }
    struct Node*temp;
    temp = head;
    int i;
	printf("\nFirst to last");
	for(i=1;temp->next!=NULL;i++)
	{
		printf("\n%d\t%d\t",i,temp->info);
		temp=temp->next;
	}
	printf("\n%d\t%d\t",i,temp->info);
	printf("\n\nLast to First");
	for(i=i;temp!=NULL;i--)
	{
		printf("\n%d\t%d\t",i,temp->info);
		temp=temp->pre;
	}
	printf("\n");
}
int main()
{
    struct Node*head = NULL;
    printLinkedList(head);
    head = insertAtEnd(head);
    head = insertAtEnd(head);
    head = insertAtEnd(head);
    head = insertAtEnd(head);
    printLinkedList(head);
    return 0;
}
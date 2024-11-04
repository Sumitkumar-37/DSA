// Write a program in C to delete An element At begin in Doubly LinkedList
#include <stdio.h>
#include <malloc.h>

typedef struct Node
{
    int info;
    struct Node *next, *pre;
};

struct Node* insertAtBegin(struct Node*head)
{
    struct Node*newNode;
    newNode = (struct Node*)malloc(sizeof(newNode));
    printf("\nEnter value for linkedList\n");
    scanf("%d",&newNode->info);
    newNode->next = NULL;
    newNode->pre = NULL;
    if(head==NULL)
        return newNode;
    newNode->next = head;
    newNode->next->pre = newNode; 
    return newNode;
}
struct Node* deleteAtBegin(struct Node*head)
{
    if(head == NULL)
    {
        printf("\nLinked List is Empty \n");
        return head;
    }
    struct Node*temp;
    temp = head;
    head = head->next;
    head->pre = NULL;
    free(temp);
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
    for(int i=0;i<5;i++)
    {
        head = insertAtBegin(head);
    }
    printLinkedList(head);
    head = deleteAtBegin(head);
    head = deleteAtBegin(head);
    head = deleteAtBegin(head);
    head = deleteAtBegin(head);
    printLinkedList(head);
    return 0;
}
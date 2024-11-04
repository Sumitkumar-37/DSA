// Write a program in C to delete An element After given node position in Doubly LinkedList
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
struct Node* deleteAfterNode(struct Node*head)
{
    if(head == NULL)
    {
        printf("\nLinked List is Empty \n");
        return head;
    }
    int pos;
    printf("\nEnter position for insertion in linkedList\n");
    scanf("%d",&pos);
    if(head == NULL)
    {
        printf("\nLinked List is Empty \n");
        return head;
    }
    struct Node*temp,*temp1;
    temp = head;
    for(int i = 1;i<pos && temp->next!=NULL;i++)
    {
        temp = temp->next;
    }
    if(temp==NULL)
    {
        temp1 = temp->next;
        temp->next = temp1->next;
        return head;
    }
    temp1 = temp->next;
    temp->next = temp1->next;
    temp1->next->pre = temp;
    free(temp1);

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
    for(int i=1;i<10;i++)
    {
        head = insertAtBegin(head);
    }
    printLinkedList(head);
    head = deleteAfterNode(head);printLinkedList(head);
    head = deleteAfterNode(head);printLinkedList(head);
    head = deleteAfterNode(head);printLinkedList(head);
    head = deleteAfterNode(head);printLinkedList(head);
    return 0;
}
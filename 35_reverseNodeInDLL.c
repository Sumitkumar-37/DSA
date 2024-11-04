// Write a program in C to reverse Nodes in Doubly LinkedList
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
	printf("\nFirst to last\n");
	while(temp->next!=NULL)
	{
		printf("%d\t",temp->info);
		temp=temp->next;
	}
	printf("%d\t",temp->info);
	printf("\n\nLast to First\n");
	while(temp!=NULL)
	{
		printf("%d\t",temp->info);
		temp=temp->pre;
	}
	printf("\n");
}

struct Node* reverseNode(struct Node*head)
{
    struct Node *temp, *temp1;
    temp=head->next;
	temp1=head;
	temp1->next=NULL;
	while(temp!=NULL)
	{
		temp1->pre=temp;
		temp1=temp;
		temp=temp->next;
		temp1->next=head;
		head=temp1;
	}
	head->pre=NULL;
	return head;
}
int main()
{
    struct Node*head = NULL;
    printLinkedList(head);
    for(int i=0;i<5;i++)
    {
        head = insertAtEnd(head);
    }
    printLinkedList(head);
    head = reverseNode(head);
    printLinkedList(head);
    return 0;
}
// Write a program in C to insert An element At begin in Singly LinkedList
#include <stdio.h>
#include <malloc.h>

typedef struct Node
{
    int info;
    struct Node *next;
};

struct Node* insertAtBegin(struct Node*head)
{
    struct Node*newNode;
    newNode = (struct Node*)malloc(sizeof(newNode));
    printf("\nEnter value for linkedList\n");
    scanf("%d",&newNode->info);
    newNode->next = head;
    return newNode;
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
    printf("\nLinked List Elements: \n");
    while(temp!=NULL)
    {
        printf("%d", temp->info);
        if(temp->next!=NULL)
        {
            printf(", ");
        }
        temp = temp->next;
    }
}
int main()
{
    struct Node*head = NULL;
    printLinkedList(head);
    head = insertAtBegin(head);
    head = insertAtBegin(head);
    head = insertAtBegin(head);
    head = insertAtBegin(head);
    printLinkedList(head);
    return 0;
}
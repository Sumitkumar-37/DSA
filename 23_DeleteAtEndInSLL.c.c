// Write a program in C to delete An element At end in Singly LinkedList
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
struct Node* deleteAtEnd(struct Node*head)
{
    if(head == NULL)
    {
        printf("\nLinked List is Empty \n");
        return head;
    }
    struct Node*temp, *temp1;
    temp = head;
    while(temp->next->next!=NULL)
    {
        temp = temp->next;
    }
    temp1 = temp->next;
    temp->next = NULL;
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
    for(int i=0;i<5;i++)
    {
        head = insertAtBegin(head);
    }
    printLinkedList(head);
    head = deleteAtEnd(head);
    head = deleteAtEnd(head);
    head = deleteAtEnd(head);
    head = deleteAtEnd(head);
    printLinkedList(head);
    return 0;
}
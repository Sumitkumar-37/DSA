
// Write a program in C to delete An element At begin in Singly LinkedList
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
    head = deleteAtBegin(head);
    head = deleteAtBegin(head);
    head = deleteAtBegin(head);
    head = deleteAtBegin(head);
    printLinkedList(head);
    return 0;
}

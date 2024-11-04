// Write a program in C to count No of Nodes in Singly LinkedList
#include <stdio.h>
#include <malloc.h>

typedef struct Node
{
    int info;
    struct Node *next;
};

struct Node* insertAtEnd(struct Node*head)
{
    struct Node*newNode;
    newNode = (struct Node*)malloc(sizeof(newNode));
    printf("\nEnter value for linkedList\n");
    scanf("%d",&newNode->info);
    newNode->next = NULL;

    if(head == NULL)
        return newNode;
    struct Node*temp;
    temp = head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;

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
int findNoOfNodes(struct Node*head)
{
    int count = 0;
    struct Node*temp;
    temp = head;
    while(temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
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
    printf("\nNo of Nodes is %d", findNoOfNodes(head));
    return 0;
}
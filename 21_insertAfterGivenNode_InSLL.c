// Write a program in C to insert An element After given node position in Singly LinkedList
#include <stdio.h>
#include <malloc.h>

typedef struct Node
{
    int info;
    struct Node *next;
};

struct Node* insertAfterNode(struct Node*head)
{
    struct Node*newNode;
    newNode = (struct Node*)malloc(sizeof(newNode));
    printf("\nEnter value for linkedList\n");
    scanf("%d",&newNode->info);
    newNode->next = NULL;

    int pos;
    printf("\nEnter position for insertion in linkedList\n");
    scanf("%d",&pos);

    if(head == NULL)
        return newNode;
    struct Node*temp;
    temp = head;
    for(int i = 1;i<pos && temp->next!=NULL;i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
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
int main()
{
    struct Node*head = NULL;
    printLinkedList(head);
    head = insertAfterNode(head);
    head = insertAfterNode(head);
    head = insertAfterNode(head);
    head = insertAfterNode(head);
    printLinkedList(head);
    return 0;
}
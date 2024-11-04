// Write a program in C to delete An element After given node position in Singly LinkedList
#include <stdio.h>
#include <malloc.h>

typedef struct Node
{
    int info;
    struct Node *next;
};

struct Node* insertAtBegin(struct Node*head, int val)
{
    struct Node*newNode;
    newNode = (struct Node*)malloc(sizeof(newNode));
    newNode->info = val;
    newNode->next = head;
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
    temp1 = temp->next;
    temp->next = temp1->next;
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
    for(int i=1;i<10;i++)
    {
        head = insertAtBegin(head, i*10);
    }
    printLinkedList(head);
    head = deleteAfterNode(head);printLinkedList(head);
    head = deleteAfterNode(head);printLinkedList(head);
    head = deleteAfterNode(head);printLinkedList(head);
    head = deleteAfterNode(head);printLinkedList(head);
    return 0;
}
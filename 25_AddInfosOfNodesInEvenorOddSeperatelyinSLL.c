// Write a program in C to Add infos of Nodes in Even or Odd Seperately in Singly LinkedList
#include <stdio.h>
#include <malloc.h>

typedef struct Node
{
    int info;
    struct Node *next;
};

struct Node *insertAtEnd(struct Node *head)
{
    struct Node *newNode;
    newNode = (struct Node *)malloc(sizeof(newNode));
    printf("\nEnter value for linkedList\n");
    scanf("%d", &newNode->info);
    newNode->next = NULL;

    if (head == NULL)
        return newNode;
    struct Node *temp;
    temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;

    return head;
}
void printLinkedList(struct Node *head)
{
    if (head == NULL)
    {
        printf("\nLinked List is Empty \n");
        return;
    }
    struct Node *temp;
    temp = head;
    printf("\nLinked List Elements: \n");
    while (temp != NULL)
    {
        printf("%d", temp->info);
        if (temp->next != NULL)
        {
            printf(", ");
        }
        temp = temp->next;
    }
}
int sumOfInfoPart(struct Node *head)
{
    int even = 0, odd = 0, i;
    struct Node *temp;
    for (temp = head, i = 1; temp != NULL; temp = temp->next, i++)
    {
        if (i % 2 == 0)
            even += temp->info;
        else
            odd += temp->info;
    }
    printf("\nSum of Even position Node\'s Information is \"%d\" and odd is \"%d\"", even, odd);
}
int main()
{
    struct Node *head = NULL;
    printLinkedList(head);
    for (int i = 1; i <= 5; i++)
    {
        head = insertAtEnd(head);
    }
    printLinkedList(head);
    sumOfInfoPart(head);
    return 0;
}
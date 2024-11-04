// Write a program in C to implement Push operation using Array
#include <stdio.h>
#define max 5

int stack[max];
int top = -1;

void push()
{
    if(top == max-1)
    {
        printf("\nStack is full");
        return;
    }
    printf("\nEnter value for stack\n");
    scanf("%d",&stack[++top]);
}

void printStack()
{
    if(top == -1)
    {
        printf("\nStack is Empty");
        return;
    }
    printf("\nStack Elements\n");
    for(int i=top;i>=0;i--)
    {
        printf("%d", stack[i]);
        if(i!=0)
        {
            printf(", ");
        }
    }
}

int main()
{
    push();
    push();
    push();
    printStack();
}
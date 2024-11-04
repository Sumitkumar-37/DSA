// 1. Write a program to convert decimal to binary using stack concept.
#include <stdio.h>
#define MAX 100
int stack[MAX];
int top = -1;
void push(int value)
{
    stack[++top] = value;
}
int pop()
{
    return stack[top--];
}
void decimalToBinary(int n)
{
    while (n > 0)
    {
        push(n % 2);
        n /= 2;
    }
    printf("Binary: ");
    while (top != -1)
    {
        printf("%d", pop());
    }
    printf("\n");
}
int main()
{
    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    decimalToBinary(n);
    return 0;
}

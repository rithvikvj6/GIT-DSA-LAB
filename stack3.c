#include <stdio.h>
#define SIZE 5

int main()
{
    int stack[SIZE] = {10, 20, 30};
    int top = 2;

    if (top == -1)
    {
        printf("Stack is Empty");
    }
    else
    {
        printf("Top element: %d", stack[top]);
    }

    return 0;
}
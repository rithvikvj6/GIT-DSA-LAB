#include <stdio.h>
#define SIZE 5
int main()
{
    int stack[SIZE] = {10, 20, 30};
    int top = 2;
    if (top == -1)
    {
        printf("Stack Underflow");
    }
    else
    {
        printf("Deleted element: %d", stack[top]);
        top--;
    }
    return 0;
}
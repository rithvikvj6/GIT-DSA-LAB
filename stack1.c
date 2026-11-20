#include <stdio.h>
#define SIZE 5

int main()
{
    int stack[SIZE], top = -1, ele;

    printf("Enter element: ");
    scanf("%d", &ele);

    if (top == SIZE - 1)
    {
        printf("Stack Overflow");
    }
    else
    {
        top++;
        stack[top] = ele;
        printf("Element inserted: %d", ele);
    }

    return 0;
}
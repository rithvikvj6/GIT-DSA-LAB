#include <stdio.h>
#define SIZE 5

int main()
{
    int queue[SIZE], front = -1, rear = -1, ele;

    printf("Enter element: ");
    scanf("%d", &ele);

    if (rear == SIZE - 1)
    {
        printf("Queue Overflow");
    }
    else
    {
        if (front == -1)
            front = 0;

        rear++;
        queue[rear] = ele;

        printf("Element inserted: %d", ele);
    }

    return 0;
}
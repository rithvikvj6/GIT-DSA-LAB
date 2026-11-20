#include <stdio.h>
#define SIZE 5

int main()
{
    int queue[SIZE] = {10, 20, 30};
    int front = 0, rear = 2;

    if (front == -1 || front > rear)
    {
        printf("Queue is Empty");
    }
    else
    {
        printf("Deleted element: %d", queue[front]);
        front++;
    }

    return 0;
}
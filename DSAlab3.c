
#include <stdio.h>
int main() {
    int arr[100], n, i, value;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    if (n >= 100) {
        printf("Array is full!");
        return 0;
    }
    printf("Enter the value to insert: ");
    scanf("%d", &value);
    arr[n] = value;
    n++;
    printf("Array after insertion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

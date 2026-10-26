
#include <stdio.h>
int main() {
    int arr[100], n, i, pos, value;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter an even index position: ");
    scanf("%d", &pos);
    if (n >= 100 || pos < 0 || pos > n || pos % 2 != 0) {
        printf("Invalid even index position!");
        return 0;
    }
    printf("Enter the value to insert: ");
    scanf("%d", &value);
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
    n++;
    printf("Array after insertion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

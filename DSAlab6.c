
#include <stdio.h>
int main() {
    int arr[100], n, i, pos;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter an even index position to delete: ");
    scanf("%d", &pos);
    if (n <= 0 || pos < 0 || pos >= n || pos % 2 != 0) {
        printf("Invalid even index position!");
        return 0;
    }
    for (i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
    printf("Array after deletion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

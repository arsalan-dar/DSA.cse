#include <stdio.h>

int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int size = 5;
    int position = 2;  // Index of element to delete (e.g., delete element '30')

    if (position < 0 || position >= size) {
        printf("Invalid position!\n");
        return 1;
    }

    for (int i = position; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    size--;

    printf("Array after deleting element at position %d:\n", position);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

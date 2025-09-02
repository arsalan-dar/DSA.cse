#include <stdio.h>

int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int size = 5;
    int newElement = 25;
    int position = 2;

    if (position < 0 || position > size) {
        printf("Invalid position!\n");
        return 1;
    }

    for (int i = size; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    arr[position] = newElement;
    size++;

    printf("Array after insertion at position %d:\n", position);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

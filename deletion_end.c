#include <stdio.h>

int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int size = 5;

    if (size == 0) {
        printf("Array is already empty.\n");
        return 1;
    }

    size--;  

    printf("Array after deleting last element:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

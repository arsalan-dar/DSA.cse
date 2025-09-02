#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int length = sizeof(arr) / sizeof(arr[0]);

    printf("Traversing the array:\n");
    for (int i = 0; i < length; i++) {
        printf("Element at index %d is %d\n", i, arr[i]);
    }

    return 0;
}

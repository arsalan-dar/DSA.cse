#include <stdio.h>

int main() {
    int arr[100] = {10, 20, 30, 40, 50}; 
    int size = 5;  
    int newElement = 0;

    
    for (int i = size; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    arr[0] = newElement;

    size++;

    printf("Array after insertion at beginning:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

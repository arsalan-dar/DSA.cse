#include <stdio.h>
void display(int arr[], int n)
{
    printf("array elements are\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d,", arr[i]);
    }
}
void search(int arr[], int n, int x)
{
    int flag = 0, i;
    for (i = 0; i < n; i++)
    {
        if (x == arr[i])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        printf("element founnd at index %d", i);
    else
        printf("Not found");
}
void max(int arr[], int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    printf("\n maximum element in array is %d", max);
}
int main()
{
    int arr[50], n, x;
    printf("enter no of elements in array");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the elemeents of array");
        scanf("%d", &arr[i]);
    }
    display(arr, n);
    printf("\nenter element to be searced");
    scanf("%d", &x);
    search(arr, n, x);
    max(arr, n);
}
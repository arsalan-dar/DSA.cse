#include <stdio.h>
void insert_beg(int arr[], int n, int x)
{
    for (int i = n; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = x;
    for (int i = 0; i < n + 1; i++)
        printf("%d, ", arr[i]);
}
void insert_end(int arr[], int n, int x)
{

    arr[n] = x;
    printf("\n");
    for (int i = 0; i < n + 1; i++)
        printf("%d, ", arr[i]);
}
void insert_any(int arr[], int n, int x, int p)
{

    for (int i = n; i > p - 1; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[p] = x;
    for (int i = 0; i < n + 1; i++)
        printf("%d, ", arr[i]);
}
void del_beg(int arr[], int n)
{
    printf("\n");
    for (int i = 0; i < n; i++)
        arr[i] = arr[i + 1];
    for (int i = 0; i < n - 1; i++)
        printf("%d, ", arr[i]);
}
void del_end(int arr[], int n)
{
    printf("\n");
    for (int i = n; i < n; i--)
        arr[i] = arr[i - 1];
    for (int i = 0; i < n - 1; i++)
        printf("%d, ", arr[i]);
}
void del_any(int arr[],int n,int p){
printf("\n");
for(int i=p;i<n;i++){
arr[i]=arr[i+1];
}
 for (int i = 0; i < n - 1; i++)
        printf("%d, ", arr[i]);


}
int main()
{
    int arr[50], n, x, p;
    printf("enter the no of elements");
    scanf("%d", &n);
    printf("enter the %d elements one by one", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("entre the element to be inserted");
    scanf("%d", &x);

    insert_beg(arr, n, x);
    n++;
    insert_end(arr, n, x);
    n++;
    printf("\nEnter the position at which you wnat to insert");
    scanf("%d", &p);
    insert_any(arr, n, x, p);
    n++;
    del_beg(arr, n);
    n--;
    del_end(arr, n);
    n--;
    del_any(arr,n,p-1);
}
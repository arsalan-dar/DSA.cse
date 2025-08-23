#include <stdio.h>

void display_array(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
}
void search_element(int arr[],int k,int n){
    int flag=0;
    for(int i=0;i<n;i++){
    if(arr[i]==k){
    flag=1;
    break;
    }}
    if(flag)
    printf("element found");
    else 
    printf("element not found");
    }

 void max_arr(int arr[],int n){
  int max=arr[0];
 for(int i=0;i<n;i++){
   if(max<arr[i])
   max=arr[i];
 }
  printf(" \nmax element of array is %d",max);
  



 }
  
int main(){
int arr[50],n,i,k;
printf("enter the no. of elements in array");
scanf("%d",&n);
printf("enter %d elements",n);
for(i=0;i<n;i++) 
scanf("%d",&arr[i]);

    display_array(arr, n);
printf("enter the element to be searched ");
scanf("%d",&k);
     search_element(arr,k,n);
     max_arr(arr,n);



    return 0;
}

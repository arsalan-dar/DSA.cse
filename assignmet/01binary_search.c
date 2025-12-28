#include<stdio.h>
int binary_search(int arr[],int n,int x){
  int low=0,high=n-1;
  while(low<=high){
int mid=(low+high)/2;
if(arr[mid]==x){
    return mid;
}
else if(x<arr[mid]){
    high=mid-1;
}
else 
low=mid+1;
  }
return -1;
}

int main(){
    int arr[50],n,x;
    printf("enter size of array");
    scanf("%d",&n);
    printf("Enter elements of arry in sorted manner");
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    printf("enter the no to be searched ");
    scanf("%d",&x);
    int result=binary_search(arr,n,x);
    if(result==-1){
        printf("element not found");} 
    else
      printf("%d",result+1)  ;  


    
    }



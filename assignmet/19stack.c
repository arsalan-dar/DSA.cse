#include<stdio.h>
#define size 5
int arr[5];
int top=-1;
void push(int x){
    if(top==size-1){
    printf("stack is full");
    return;
    }
else{    
top++;
arr[top]=x;
printf("%d pushed into stack\n",x);
}}
void pop(){
printf("%d popped from stack\n",arr[top]);    
top--;
}
void isempty(){
    if(top==-1)
    printf("stack is empty\n ");
}
void isfull(){
if(top == size-1)
printf("is full");
}
int main(){
push(5);
push(6);
push(7);
push(8);
pop();
pop();

for(int i=0;i<=top;i++){
    printf("%d,",arr[i]);
}
}
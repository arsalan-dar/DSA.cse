#include<stdio.h>
#define size 5
int queue[size];
int front=-1,rear=-1;
int is_empty(){
    if(front==-1 || rear==-1)
    return 1;
    else
     return 0;
}
void enqueue(int x){
 if(rear==size-1){
    printf("Queue is full");
   return;
 }
if(front==-1)
front=0;
rear++;
queue[rear]=x;
printf("\n");
printf("%d enqueued",x);
}
void dequeue(){
if(is_empty()){
    printf("queue is empty");
    return;
}
else
printf("\n");
printf("%d is dequeued",queue[front]);
front++;

}

void display(){
for(int i=front;i<=rear;i++)
printf("%d, ",queue[i]);
printf("\n");
}

int main(){
enqueue(4);
enqueue(5);
enqueue(6);
enqueue(7);
dequeue();
dequeue();
display();



}

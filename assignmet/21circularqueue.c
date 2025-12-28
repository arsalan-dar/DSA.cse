#include<stdio.h>
#define size 5
int cq[size];
int front=-1,rear=-1;
void enqueue(int x){
if(front==-1)
front=rear=0;
else{
    rear =(rear+1)%size;
}
cq[rear]=x;
printf("%d enqueue\n",x);
}
void dequeue(){
printf("%d dequeued\n",cq[front]);
if(front==rear)
front=rear=-1;
else
{
    front=(front+1)%size;
}
}
void display(){
int i=front;
while(1){
printf("%d ",cq[i]);
if(i==rear)
break;
i=(i+1)%size;

}
}
int main(){
enqueue(40);
enqueue(30);
enqueue(20);
enqueue(10);
dequeue();
dequeue();
enqueue(50);
enqueue(60);
display();
}
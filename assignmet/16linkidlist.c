#include<stdio.h>
#include<stdlib.h>
struct node {
int data;
struct node *next;
};
int main(){
struct node *head=NULL,*temp=NULL,*newnode=NULL;
int n,i;
printf("enter the no of nodes");
scanf("%d",&n);
for(i=0;i<n;i++){
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter data foe new node %d",i);
scanf("%d",&newnode->data);
newnode->next=NULL;
if(head ==NULL){
head=temp=newnode;
}
else{
    temp->next=newnode;
    temp=newnode;
}
}

temp=head;
while(temp!=NULL){
printf("%d",temp->data);
temp=temp->next;

}




}
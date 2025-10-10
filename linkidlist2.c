#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
struct node *head;
};
struct node *create( int n){
    
struct node *head=NULL;
struct node *newnode=NULL;
struct node *temp=NULL;
int i,value;
for( i=0;i<n;i++){
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter data for node %d\n",i+1);
scanf("%d",&value);
newnode->data=value;
newnode->next=NULL;
if (head==NULL){
head=newnode;
temp=head;
}
else{
    temp->next=newnode;
    temp=temp->next;
}
}
return  head;
}
void traverse(struct node * head){
struct node *temp;
temp=head;
while(temp!=NULL){ 
printf("-> %d ",temp->data);
temp=temp->next;
printf("\n");}
}
void insertbegin(struct node *head){
struct node *temp;
struct node *newnode;
int m;
temp=head;
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter data for newnode");
scanf("%d",&m);
newnode=temp->next;
newnode->data =temp->data;
void traverse(struct node * head);



}

int main(){
int n;
struct node *head;
printf("enter number of nodes");
scanf("%d",&n);

head=create(n);
traverse(head);
insertbegin(head);
}

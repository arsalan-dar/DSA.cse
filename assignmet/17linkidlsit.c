#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
struct node* insert_beg(struct node *head,int x){
    struct node * temp,*newnode;
    temp=head;
 newnode= (struct node *)malloc(sizeof(struct node));
 newnode->data=x;
 newnode->next=head;
 return newnode;
}
struct node* insert_end(struct node *head,int x){
    struct node *temp,*newnode;

newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=x;
newnode->next=NULL;
if(head==NULL){
    return newnode;
}
temp=head;
while(temp->next!=NULL)
temp=temp->next;
temp->next=newnode;
return head;
}
struct node* insert_any(struct node *head,int x,int p){
struct node *temp,*newnode;
newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=x;
newnode->next=NULL;
temp=head;
for(int i=0;i<p-1 && temp!=NULL ;i++){
    temp=temp->next;
}
newnode->next=temp->next;
temp->next=newnode;

return(head);

}


void display(struct node *head){
    struct node *temp;
    temp=head;
    while(temp!=NULL){
    printf("%d, ",temp->data);
    temp=temp->next;
}
printf("\n");
}


int main(){
int n,i;
struct node *temp=NULL,*head=NULL,*newnode=NULL;    
printf("enter the no of nodes");
scanf("%d",&n);
for(i=0;i<n;i++){
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter data for node %d\n",i);
scanf("%d",&newnode->data);
newnode->next=NULL;
if(head==NULL){
    head=temp=newnode;
}
else
temp->next=newnode;
temp=newnode;
}
temp=head;
int count=0;
while(temp!=NULL){
   printf("%d,",temp->data);
   temp=temp->next;
   count++; 

}
int x;
int y=6;
printf("\n count :%d",count);
printf("enter data for new node");
scanf("%d",&x);
head=insert_beg(head,x);
display(head);
head=insert_end(head,y);
display(head);
int p=3;
head=insert_any(head,x,p);
display(head);
}
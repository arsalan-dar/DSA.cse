#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
void display(struct node *head){
struct node *temp;
temp=head;
while(temp!=NULL){
printf("%d, ",temp->data);
temp=temp->next;
}}
struct node * del_beg(struct node *head){
struct node * temp;
temp=head;
head=head->next;
return head;
}
struct node* del_end(struct node *head){
struct node *temp;
temp=head;
while(temp->next->next!=NULL){
    temp=temp->next;
}
temp->next=NULL;
return head;
}
struct node * del_any(struct node *head,int p){
    struct node * temp;
    for(int i=0;i<p-1 && temp->next!=NULL;i++){
     temp=temp->next;
    }
    temp->next=temp->next->next;
    return head;
}


int main(){
    int n,i;
    struct node *newnode=NULL,*temp=NULL,*head=NULL;
printf("enter no of nodes");
scanf("%d",&n);
for(i=0;i<n;i++){
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter data for node %d\n",i);
scanf("%d",&newnode->data);
newnode->next=NULL;
if(head==NULL){
    head=temp=newnode;
}
else{
temp->next=newnode;
temp=newnode;

}
}  
display(head);
printf("\n");
//head=del_beg(head);
//display(head);
//head=del_end(head);
//printf("\n");
//display(head);
head=del_any(head,3);
display(head);
}
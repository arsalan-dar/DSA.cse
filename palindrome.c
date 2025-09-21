#include<stdio.h>
int ispalindrome(char str[],char *p,char *q){
int i=0;   
int flag=1 ;
while(*q!='\0'){
q++;}
q--;
while(p<q){
p++;
q--;

if(*p!=*q)
{printf("not a palandrome");
flag=0;
break;}

}
return flag;
}
int main(){
char str[100];
char *p,*q;
p=&str[0];
q=&str[0];    
printf("enter a string");
scanf("%s",str);
if(ispalindrome(str,p,q))
printf("given string is a palindrome");




}
 
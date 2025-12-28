#include<stdio.h>
int ispalindrome(char str1[],char *p,char *q){
    int flag=1;
while(p<=q){   
if(*p!=*q){
printf("not a palindrome");
flag=0;
break;}
p++;
q--;

}
return flag;
}
int main(){
char str1[]="labal";
char *p,*q;
p=&str1[0];
q=&str1[0];
int i=0;
while(str1[i]!='\0')
{
    q++;
    i++;
}
q--;
if(ispalindrome(str1,p,q)==1)
printf("string is a palindrome");
}
#include<stdio.h>
int main(){
int count=0;    
char str[]="arslan";
char *p;
p=&str[0];
while(*p!='\0'){
count++;
p++;
}
p=str+count-1;
printf("%d",count);
for(int i=count-1;i>=0;i--){
printf("%c",*p);
p--;
}}
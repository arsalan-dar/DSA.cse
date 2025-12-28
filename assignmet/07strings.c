#include<stdio.h>
int main(){
char str[100];
char *p;
printf("entre a string");
scanf("%s",str);
p=&str[0];
while(*p!='\0'){
printf("%c",*p);
p++;}
}
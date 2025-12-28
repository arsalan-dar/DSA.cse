#include<stdio.h>
int main(){
char str[]="arslan";
char *f;
char *l;
f=&str[0];
l=&str[0];
int i=0;
while(str[i]!='\0'){
l++;
i++;}
l--;
while(f<=l){
printf("%c",*l);
l--;
}
}
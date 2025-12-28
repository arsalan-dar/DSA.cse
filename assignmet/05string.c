#include<stdio.h>
#include<string.h>
int main(){
char str[100];
int count=0;
printf("enter a string\n");
scanf("%s",str);
int i=0;
while(str[i]!='\0'){
count++;
i++;}
for(i=count;i>=0;i--)
printf("%c",str[i]);


}

#include<stdio.h>
int main(){
    int count=0;
char str[100];
printf("enter a stering\n");
scanf("%s",str);
printf("here is your string %s\n",str);
int i=0;
while(str[i]!='\0')
{count++;
i++;
}
printf("length of string is %d",count);
}
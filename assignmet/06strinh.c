#include<stdio.h>
#include<string.h>
int main(){
char str1[]="arslan";
char str2[50];
char str3[50];
printf("enter your name\n");
scanf("%s",str2);
printf("%s",str1);
printf("\n%lu",strlen(str1));
strcpy(str3,str1);
printf("\n%s",str3);
strcat(str2,str1);
printf("\n%s",str2);
int r = strcmp(str1,str2);
printf("\n%d",r);
}
#include<stdio.h>
int main(){
char str1[100],str2[100],str3[100];
int p=3;
int i=0,j=0,k=0;
printf("enter twop strings");
scanf("%s %s",str1,str2);
while(i<p){
    str3[i]=str1[i];
    i++;
}
while(str2[j]!='\0'){
str3[i]=str2[j];
i++;
j++;
}
k=p;
while(str1[k]!='\0'){
    str3[i]=str1[k];
    i++;
    k++;
}
str3[i]='\0';
printf("%s",str3);


}
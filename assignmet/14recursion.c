#include<stdio.h>
int acr(int m,int n){
if(m==0)
return n+1;
else if (m>0&&n==0)
return acr(m-1,1);
else 
return acr(m-1,acr(m,n-1));

}

int main(){
int m=1;
int n=2;
printf("%d",acr(m,n));

}
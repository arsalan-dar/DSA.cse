#include<stdio.h>
int fat(int a){
if(a>1){
    return (a*fat(a-1));
}
else 
return 1;

}

int main()
{
int a=5;
int y=fat(a);
printf("%d",y);
}


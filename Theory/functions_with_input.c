#include<stdio.h>

int sum(int a,int b);
int main(){
int c;
c=sum(2,5);
printf("%d",c); 
return 0;
}

int sum(int a,int b){
    int reasult;
    reasult=a+b;
    return reasult;
}

// we use void when the function not reaturning any thing
// but we use int when the fucntion returnig a value
 //sum of first 10 natural numbers

#include<stdio.h>
 int main(){
 int n=10;
 int sum=0;
 int i=0;
    while(i<=10){
     i++;
     
     sum+=i;
    }


    printf("The sum of 1 to 10 is:%d",sum); 
 return 0;
 }
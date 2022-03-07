//using for loop print n natural numbers

#include<stdio.h>
int main(){
    int n;
    printf("ENter the value of n:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("The number is:%d\n",i+1);
    }
return 0;
}
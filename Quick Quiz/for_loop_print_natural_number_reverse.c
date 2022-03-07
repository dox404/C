//printing the n natural numbers in decreasing reverse order

#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(int i=n;i;i--){
        printf("The number is %d\n",n);
    }
return 0;
}
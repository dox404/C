#include<stdio.h>
int main(){
    int i=1;
    int factorial=1;
    int n;
    printf("Enter the number which you want factorial: ");
    scanf("%d",&n);
    for (i;i<=n;i++){
        factorial=factorial*i;
    }
    printf("The factorial of given number is: %d",factorial);
return 0;
}
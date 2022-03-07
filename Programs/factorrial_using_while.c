#include<stdio.h>
int main(){
int i=1;
int factorial=1;
int n;
printf("Enter the number which you want factorial: ");
scanf("%d",&n);
while(i<=n){
    factorial=factorial*i;
    i++;


}
printf("The factorial of the given number is %d",factorial);

return 0;
}
#include<stdio.h>
int main(){
int n;
printf("Enter the number: ");
scanf("%d",&n);
for(int i=10;i;i--){
    printf("%d\n",i*n);
}
return 0;
}
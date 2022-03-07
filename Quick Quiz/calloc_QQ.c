#include<stdio.h>
#include<stdlib.h>
int main(){
int n;
printf("How many integers You want:\n ");
scanf("%d",&n);
int *ptr;
ptr=(int*) calloc(8,sizeof(int));

for(int i=0;i<n;i++){
    printf("Enter the %d Number:\n ",i);
    scanf("%d",&ptr[i]);
}
for(int i=0;i<n;i++){
    printf("The Number is : %d\n",ptr[i]);
}


return 0;
}
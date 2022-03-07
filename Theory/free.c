#include<stdio.h>
#include<stdlib.h>
int main(){
// int n;
// printf("How many integers You want:\n ");
// scanf("%d",&n);
int *ptr;
ptr=(int*) malloc(60000*sizeof(int));

for(int i=0;i<500;i++){
    printf("Enter the %d Number:\n ",i);
    scanf("%d",&ptr[i]);
    free(ptr);
}
for(int i=0;i<500;i++){
    printf("The Number is : %d\n",ptr[i]);
}


return 0;
}

// free function will free the memory allocation

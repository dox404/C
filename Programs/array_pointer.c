#include<stdio.h>
int main(){
int arr[10];
int *ptr=&arr[0];
ptr=ptr+2;
if(ptr==&arr[2]){
    printf("The elements are Same\n");
}
else{
    printf("The elemenets are not same\n");
}

return 0;
}


///the problem is we are verifying that the pointer address+2 is equal to the third variable element of the array

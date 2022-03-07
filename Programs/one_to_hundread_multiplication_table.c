#include<stdio.h>
int main(){
int arr[100];
int a,i,j;

printf("Enter the number: ");
scanf("%d",&a);
for( i=0; i<100; i++){
    arr[i]=a*(i+1);
}
for(j=0; j<100;j++){
    printf("%dx%d=%d\n",a,j+1,arr[j]);
}

return 0;
}
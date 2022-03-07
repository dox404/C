//printing the multiplication table in range 10
//using for loop
// #include<stdio.h>
// int main(){
// int n;
// printf("Enter the number");
// scanf("%d",&n);
// for(int i=1;i<=10;i++){
//     printf("%d\n",i*n);
// }
// return 0;
// }

//using whilw loop
#include<stdio.h>
int main(){
int n;
int i=1;
printf("Enter the number: ");
scanf("%d",&n);
while(i<=10){
    printf("%d\n",i*n);
    i++;
}
return 0;
}
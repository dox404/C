#include<stdio.h>
int main(){
    int a;
    printf("Enter the number: \n");
    scanf("%d",&a);
    
    if(a%2==0){
        printf("The number is evan");
    }
    // else if(a==0){
    //     printf("Invalid Input");
    // }
    else{
        printf("the number is odd");
    }
    

    
    return 0;
}
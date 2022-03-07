#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr=calloc(8,sizeof(int)); //here we define calloc using this syntax instead of * we used , 
    
return 0;
}
// malloc and calloc  are almost same but if any reason memory allocation failled then calloc will return a 
/// a NULL pointer
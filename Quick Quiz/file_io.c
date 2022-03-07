//cheking a file is exsist or not

#include<stdio.h>
#include<strings.h>
int main(){

char c[50];
FILE *ptr;
ptr=fopen("file_io.txt","r");
if (ptr==NULL){
    printf("THE file does not exsist");
}
else{
    fscanf(ptr,"%s",&c);
    printf("Teh file is exsist");
}
return 0;
}
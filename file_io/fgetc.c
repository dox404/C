#include<stdio.h>
int main(){
FILE *ptr;
ptr =fopen("getcdemo.txt","r");
char c=fgetc(ptr);  // it will store the first character in c
printf("%c",c); // it will print the first character
return 0;
}
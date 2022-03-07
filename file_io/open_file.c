#include<stdio.h>
int main(){
char c[50];
FILE *ptr;
ptr=fopen("IO.txt","r"); // it opens the file in read mode
fscanf(ptr,"%s",c); // it will scan the file
printf("%s",c); // it will print the content
fclose(ptr);
return 0;
}
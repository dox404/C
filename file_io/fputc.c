#include<stdio.h>
int main(){
FILE *ptr;
ptr =fopen("putcdemo.txt","w");
putc('c',ptr); // we use putc to write a character in the text file
return 0;       // syntax:- putc(what we want to write, where we want to write)
}
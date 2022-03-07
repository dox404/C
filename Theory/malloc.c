#include<stdio.h>
#include<stdlib.h>
int main(){
int *ptr;
ptr = (int*) malloc(8*sizeof(int)); //here we allocated the memory with malloc
return 0;
}
// we can use this like an array

// malloc syntax is : malloc(how_many_i want _to_create*size of (char, int or float))
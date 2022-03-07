#include<stdio.h>
int main(){
int *ptr;
int *ptr2;
ptr=malloc(8*sizeof(int));// here we define malloc
ptr=realloc(ptr,10*sizeof(int));
return 0;
}
// we use realloc to upgrade (increase or decrease) the pointer
// syntax: realloc(old_ptr, new size);
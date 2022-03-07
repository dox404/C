// for int

//#include<stdio.h>
// int main(){
// int a=34;
// int *b=&a;
// printf("the address of the poinder is %d\n",b);
// b++;
// printf("The address of the pointer after increament is %d",b);
// printf("Here we notice that size of a interger is 4 bytes");

// return 0;
// }



//For char
#include<stdio.h>
int main(){
char a='c';
char *b=&a;
printf("The address of the pointer is %d\n",b);
b++;
printf("The address of the character after increament %d",b);
return 0;
}


// for float

// #include<stdio.h>
// int main(){
// float a=4.5;
// float *b=&a;
// printf("The address of the pointer is %d\n",b);
// b++;
// printf("The address of the character after increament %d",b);
// return 0;
// }
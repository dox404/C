#include<stdio.h>
int main(){
FILE *ptr;

ptr =fopen("fgetcdemo2.txt","r");
// char c=fgetc(ptr);


printf("The first character: %c\n",fgetc(ptr));
printf("The 2nd character: %c\n",fgetc(ptr));
printf("The 3rd character: %c\n",fgetc(ptr));
printf("The 4th character: %c\n",fgetc(ptr));


// the abvobe program will print all characters one by one




return 0;
}
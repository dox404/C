#include<stdio.h>
int main(){
char str[]={'M','A','N','I','\0'};
char *ptr=str;

while(*ptr!='\0'){
    printf("%c",*ptr);
    ptr++;
}
return 0;
}
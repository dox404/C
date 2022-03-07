#include <stdio.h>
#include <string.h> // to perform string operation we have to import the string.h libreary
int main(){
// to  know the length of the string
char str[50];
printf("Enter the string to knwo the length: ");
gets(str);
int length =strlen(str);
printf("%d",length);

    return 0;
}
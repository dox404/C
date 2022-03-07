// #include<stdio.h>
// int main(){
// char a[10];
// printf("Enter any name:" );
// scanf("%s",a);
// printf(a);

// return 0;
// }
// in the prevois program with scanf funtion we can assign one word to the created array

#include<stdio.h>
int main(){
char a[10];
printf("Enter any name:" );
gets(a);
printf(a);

return 0;
}

// in this prgtram we can assign space and multiple words(using gets() method)
// we can use multiple gets in a program
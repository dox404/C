#include<stdio.h>
#include<string.h>
int main(){
char str1[10]="mani";
char *str2="mani";

int val=strcmp(str1,str2);
printf("%d",val);
return 0;
}


// strcmp value is a integer value
// if the two strings are same then the strcmp value will be 0
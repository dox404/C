#include<stdio.h>
#include<string.h>
int main(){
char str2[20]= "Muktarul Hoque";
char str[20]="Hi ";
// char 
// to concatinate str string  to str2 string{strcpy(target,source)}
strcat(str,str2);
printf(str);

// printf("The str value is %s\n",str);
// printf("The str2 value is %s",str2);

return 0;
}
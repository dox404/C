#include<stdio.h>
#include<stdalign.h>
int main(){
char *str="Muktarul Hoque";
char str2[20];
// to copy str string  to str2 string{strcpy(target,source)}
strcpy(str2,str);

printf("The str value is %s\n",str);
printf("The str2 value is %s",str2);

return 0;
}
// printing three integrs form a file
#include<stdio.h>
int main(){
int a,b,c;
FILE *ptr;
ptr=fopen("integers.txt","r");
fscanf(ptr,"%d %d %d",&a,&b,&c);
printf("The theree integers are: %d %d %d",a,b,c);
return 0;
}
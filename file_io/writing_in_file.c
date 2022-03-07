#include<stdio.h>
int main(){
char c[50]="my name is mani";;

FILE *ptr;
ptr=fopen("generatred.txt","w");

fprintf(ptr, "The text is %s \n",c);
fprintf(ptr, "this is another content");
fclose(ptr);

return 0;
}

// the abhove program will write the fprintf and c element in the generated.txt file
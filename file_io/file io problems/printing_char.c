// printing the character twise to a file from another file
#include<stdio.h>
int main(){
FILE *ptr1;
FILE *ptr2;

ptr1=fopen("characters.txt","r");
ptr2=fopen("generated.txt","w");

char c=getc(ptr1);
while(c!=EOF){
    fputc(c,ptr2);
    fputc(c,ptr2);
    c=getc(ptr1);
}

return 0;
}


///the above proigram will ptint the character  twice to the generated file
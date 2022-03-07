#include<stdio.h>
int main(){
FILE *ptr;
ptr=fopen("full_element.txt","r");
char c=fgetc(ptr);
// printf("%c",c);
while(c!=EOF){   // EOF means the end of file
    printf("%c",c);
    c=fgetc(ptr);
}
return 0;
}

//the above code will print the all content of the full_element.txt file
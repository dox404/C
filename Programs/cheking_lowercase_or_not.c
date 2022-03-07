//cheking an input charactervis lowercase or not
#include<stdio.h>
int main(){
    char c;
    printf("Enter the character:\n");
    scanf("%c",&c);
    if (c>=97 && c<=122)
    {
        printf("it is lowercase");
    }
    else{
        printf("It is not lowercase");
    }
return 0;
}
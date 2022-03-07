#include<stdio.h>
int main(){
    int a=10;
    if(a=11){
        printf("i am 11\n");
        printf("%d",a);
    }
    else
        printf("i am not 11");
return 0;
}

//the above code will print i am 11 becase in line number 4 
//in if condition a=11 here a=11 is assignment operator not condional operator
//so in line number 4 , 11 is assined in a 
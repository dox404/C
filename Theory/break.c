//break statement in loops


#include<stdio.h>
int main(){
int i=0;
while(i<10){
    printf("%d\n",i);
    if(i==5){
        break;
    }
    i++;
}
return 0;
}

/*

Syntax:
            loop{
                if(condition){
                    break;
                }
            }


*/
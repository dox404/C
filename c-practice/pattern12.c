#include<stdio.h>
int main(){
int i,j,k=0;
for(i=1;i<=7;i++){
    if (i<=4){
        k++;
    }
    else{
        k--;
    }
    for(j=1;j<=4;j++){
        if(j<=k){
            printf("*");
        }
        else{
            printf(" ");
        }
    }
    printf("\n");
}
return 0;
}
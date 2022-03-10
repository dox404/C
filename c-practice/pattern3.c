#include<stdio.h>
int main(){
int i,j ,rows;
printf("Enter the rows: ");
scanf("%d",&rows);
for(i=1;i<=rows;i++){
    for(j=0;j<i;j++){
        printf("%c",65+j);
    }
    printf("\n");
}
return 0;
}


// here we used the aschii value to print the folowing pattern
/*
A
AB
ABC
ABCD
ABCDF

*/
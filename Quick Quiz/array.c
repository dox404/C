#include<stdio.h>
int main(){
    int marks[5];
    printf("Enter the marks 1: ");
    scanf("%d",&marks[0]);
    printf("Enter the marks 2: ");
    scanf("%d",&marks[1]);
    printf("Enter the marks 3: ");
    scanf("%d",&marks[2]);
    printf("Enter the marks 4: ");
    scanf("%d",&marks[3]);
    printf("Enter the marks 5: ");
    scanf("%d",&marks[4]);

    printf("you entered %d %d %d %d and %d",marks[0],marks[1],marks[2],marks[3],marks[4]);
return 0;
}
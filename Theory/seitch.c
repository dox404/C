#include<stdio.h>
int main(){
int ratings;
printf("Enter your ratings: \n");
scanf("%d",&ratings);
switch (ratings){
    case 1:
        printf("Your ratings is 1");
        break;
    case 2:
        printf("Your ratings is 2");
        break;
    case 3:
        printf("Your ratings is 3");
        break;
    case 4:
        printf("Your ratings is 4");
        break;
    case 5:
        printf("Your ratings is 5");
        break;

    default:
    printf("Invalid Rating!!");
    break;
}
return 0;
}
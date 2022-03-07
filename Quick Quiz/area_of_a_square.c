#include<math.h>
#include<stdio.h>
int main(){
int side;
printf("Enter the side of the square:\n");
scanf("%d",&side);
printf("the area of the sqaure is %f",pow(side,2));
return 0;
}

//here we using the built in c function math.h..and pow
//pow is used for the power of any number
//we used %f because it  returnes double type 
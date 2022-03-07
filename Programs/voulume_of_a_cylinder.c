#include<stdio.h>
int main(){
int radious;
float pi=3.14;
int height;
printf("Enter the radious of the cylinder:");
scanf("%d",&radious);
printf("Enter the height of the cylinder:");
scanf("%d",&height);
printf("The volume of the cylinder is is: %f",pi*radious*radious*height);
return 0;
}
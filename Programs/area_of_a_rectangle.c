
/*
Area calculating using given area and breth

#include<stdio.h>
int main(){
int lenght=2,breath=4 ;
int area=lenght*breath;
printf("The Area of the rectangle is %d",area);
return 0; 
}
*/
 //area calculating using user input

 #include<stdio.h>
 int main(){
 int length, breath;
//  int area = length*breath;
 printf("Enter the lenth of the Rectangle:");
 scanf("%d",&length);
 printf("Enter the Breath of the rectangle:");
 scanf("%d",&breath);
 printf("The area of the Rectangle is %d",length*breath);

 return 0;
 }
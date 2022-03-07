//we are calculating force of attraction in a body of mass m
#include<stdio.h>
float forceofattraction(float mass);
int main(){
    float m;
printf("Enter the mass in kg: ");
scanf("%f",&m);
printf("the force of attraction is %f newton",forceofattraction(m));

return 0;
}

float forceofattraction(float mass){
    float force=mass*9.8;
    return force;
}
//here we gonna do celcius to fahrenheit using function
#include<stdio.h>
float celTofah(float cel );
int main(){
float a;
printf("Enter the celcius:\n");
scanf("%f",&a);
printf("The fahrenheit value is %f",celTofah(a));  
return 0;
}
float celTofah(float cel){
    return (cel * 1.8000+ 32.00);
 ;
}

//(0°C × 9/5) + 32 = 32°F)
//=>°F =°C * 1.8000+ 32.00

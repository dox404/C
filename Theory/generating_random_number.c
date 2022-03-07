//program for generating random nunbers

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){
int number;
srand(time(0));
number=rand()%100+1;
printf("%d",number);
return 0;
}
// here we gonna show that how call by value and how call by reference works
#include<stdio.h>
int swat(int *x, int *y);
int wrong_swap(int x, int y);
int main(){
wrong_swap(3,4);
printf('the value of x and y is %d',x,y);
return 0;
}

int wrong_swap(int x,int y){
    int temp;
    temp=x;
    x=y;
    y=temp;

}
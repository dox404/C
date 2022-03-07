//avarage of three nunbers using function

#include<stdio.h>
int avarage(int a,int b,int c);
int main(){
printf("The avarage of 2 3 4 is %d ",avarage(2,3,4));
return 0;
}
int avarage(int a,int b,int c){
    return(a+b+c)/3;

}
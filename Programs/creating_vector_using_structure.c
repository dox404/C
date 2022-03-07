#include<stdio.h>
#include<string.h>

struct vector{
    int x;
    int y;
};
int main(){
struct vector v1,v2;
v1.x=15;
v2.y=20;
printf("The x dim is %d and y dim is %d",v1.x,v2.y);


return 0;
}
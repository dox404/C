#include<stdio.h>
#include<strings.h>
struct employee{
    char name[20];
    char address[20];     // inplementing structure
    int slary;
};
int main(){
struct employee e1;
struct employee *ptr; // here we are creating a pointer in employee

ptr=&e1;  //// here we storing the address of  e1 employee to the pointer ptr
// (*ptr).slary=100; // here we are adding the salary value with the help of pointer
ptr->slary=101;
printf("%d",e1.slary); // printing the salary value

// here (*ptr).slary=100 and ptr->slary=100 is samne thing

return 0;
}
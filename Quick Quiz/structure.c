#include<stdio.h>
#include<string.h>
struct employee{
    char address[50];
    int salary;
    char name[50];
};

int main(){
    struct employee e1,e2,e3; 
    printf("Enter the full name of the first employee:\n ");
    gets(e1.name);
    printf("Enter the address of the first employee:\n ");
    gets(e1.address);
    printf("Enter the salary of the first employee:\n ");
    scanf("%f",&e1.salary);
    // printf("Enter the full name of the first employee:\n ");
    // gets(e2.name);
    // printf("Enter the address of the first employee:\n ");
    // gets(e2.address);
    // printf("Enter the salary of the first employee:\n ");
    // scanf("%f",&e2.salary);

    printf("Enter the full name of the 2nd employee:\n ");
    gets(e2.name); 
    printf("Enter the address of the 2nd employee:\n ");
    gets(e2.address);
    printf("Enter the salary of the 2nd employee:\n ");
    scanf("%f",&e2.salary);

    printf("Enter the full name of the 3rd employee:\n ");
    gets(e3.name);
    printf("Enter the address of the 3rd employee:\n ");
    gets(e3.address);
    printf("Enter the salary of the 3rd employee:\n ");
    scanf("%f",&e3.salary);

return 0;
}






//the program is in copmleted
//this is it
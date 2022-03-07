#include<stdio.h>
#include<string.h>
struct  employee{
    char name[20];
    int salary;
    char address;
};
void show(struct employee e1){
    printf("The name of the employee is: %s", e1.name);
    printf("The salary of the employee is: %d", e1.salary);
    printf("The address of the employee is: %s", e1.address);
}
int main(){
    struct  employee e1;
    struct employee *ptr;
    ptr=&e1;
    *strcpy(ptr->name,"Mani");
    ptr->salary=15000;
    strcpy(ptr->address,"Alampur");
    show(e1);
    

return 0;
}
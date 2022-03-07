#include<stdio.h>
#include<strings.h>

struct employee{
    char name[20];
    char address[20];
    int salary;
};
int main(){
    struct employee e1;
    struct employee *ptr;
    ptr=&e1;
    e1.salary=15000;
    strcpy(e1.name,"mani");
    ptr->name;

    
    printf("%d\n",e1.salary);
    printf("%s",e1.name);
    



return 0;
}
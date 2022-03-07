#include<stdio.h>
#include<string.h>

typedef struct employee
{
    char name[20];
    char address[20];
    int salary;

}emp;

int main(){

    emp e1;
    e1.salary=15000;
    printf("%d",e1.salary);

return 0;
}
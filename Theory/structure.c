#include<stdio.h>
#include<string.h>


struct  employee{
    int grade;
    float salaray;
    char name[20];

};

int main(){
 struct employee e1;
 e1.salaray=1000;
 strcpy(e1.name,"Muktarul Hoque");
 e1.grade=95;

printf("%s\n",e1.name);
printf("%d\n",e1.grade);
printf("%f\n",e1.salaray);

return 0;
}

// we can construct our own datatype by using abhove method
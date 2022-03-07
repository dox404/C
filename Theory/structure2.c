#include<stdio.h>
#include<string.h>
struct newstructure
{
    char name[20];
    int slary;
    char address[20];

};

int main(){
struct newstructure e1={"Mani",500,"Alampur"};// we acn define our own data typye  also with this format

printf("The salary is : %d\n",e1.slary);
printf("The Name is : %s\n",e1.name);
printf("The address is : %s\n",e1.address);

return 0;
}
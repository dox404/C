#include<stdio.h>

void display();//before main here we have to tell compiler that we want to decalare a fanction later
int main(){
    printf("Initializing display function\n");
    display();
    printf("Display function finished its work\n");
return 0;
}
void display(){
    printf("This is display function\n");
}



/*

syntax:  

        #include<stdio.h>
            declare function name here before main function
            int main(){
                    you can call function here
             return 0;   
            }
            you have to write function code here after the main function

*/
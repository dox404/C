//write a proram to print first n natural number using do while loop


#include<stdio.h>
int main(){
    int i=0;
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    do{
        printf("The number is %d\n",i+1);
        i++;
    }while(i<n);
return 0;
}
/*

        Syntax:
                do{
                    code
                }while(conddition)

*/
/*if i want to run the code for one time must then i will use do while loop and while 
confition must be false(if i want to run the code for one time if not then while condition must be true)
*/
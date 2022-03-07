//onle liner if else
#include <stdio.h>
int main()
{
    int a;
    printf("Enter the value of a:");
    scanf("%d", &a);
    // if (a < 50)
    // {
    //     printf("A is less than 50");
    // }
    // else if (a > 50)
    // {
    //     printf("A is greater than 50");
    // }
    //OR
    (a<50)? printf("a is less than 50"):printf("A is greater than 50");


    return 0;
}
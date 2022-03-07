#include<stdio.h>
int main(){
    int grade;
    printf("Enter the grade; ");
    scanf("%d",&grade);

    switch (grade)
    {
    case 100>=90:
        printf("The grade is A");
        break;
    case 2:
        printf("The grade is B");
        break;
    case 3:
        printf("The grade is C");
        break;
    case 4:
        printf("the grade is D");
        break;
    default:
        printf("You are failed");
        break;
    }
return 0;
}
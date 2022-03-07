#include<stdio.h>
int main(){
    int bengali,english,math,chemistry,physics,biology;
    float total;
    printf("Enter the marks in bengali out of 100:\n");
    scanf("%d",&bengali);
    printf("Enter the marks in english out of 100:\n");
    scanf("%d",&english);
    printf("Enter the marks in math out of 100:\n");
    scanf("%d",&math);
    printf("Enter the marks in chemistry out of 100:\n");
    scanf("%d",&chemistry);
    printf("Enter the marks in physics out of 100:\n");
    scanf("%d",&physics);
    printf("Enter the marks in biology out of 100:\n");
    scanf("%d",&biology);
    total=(bengali+english+math+chemistry+physics+biology)/6;

    if ((total<40)||bengali<33||english<33||math<33||chemistry<33||physics<33||biology<33){


        printf("your total persentage is %f and you are failed!!",total);
    }
    else{
        printf("your total persentage is %f and you have passed",total);
    }



return 0;
}   
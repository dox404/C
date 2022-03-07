
//i have to print the first n natural number using do while loop

#include<stdio.h>
int main()
{
    int i=0;
    int n;
    printf("enter the value of n:\n");
    scanf("%d",&n);
    do{
        printf("%d\n",i+1);
        i++;
    }while (i<n);
    
    
    return 0;
}
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    printf("devisibility test returns: %d", num % 97);

    return 0;
}
//if the abhove program returs 0 then the input number is devisible by 97 else it will not devisible with 97
//number gussing game

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){
int number;
int guess;
int attempts=1;
srand(time(0));
number=rand()%100+1;
printf("%d",number);
do{
    printf("Enter the number:\n");
    scanf("%d",guess);
    if(number<guess){
        printf("Guess Higher\n");
    }
    else if(number>guess){
        printf("Guess lower\n");
    }
    else{
        printf("You guessed it in %d attempts",attempts);
    }
    attempts++;

}while(guess!=number);
return 0;
}
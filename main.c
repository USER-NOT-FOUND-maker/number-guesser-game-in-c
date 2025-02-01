#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));
    int num = rand() % 1000;


    int guess;

    printf("guess a number between 0 and 1000: ");
    scanf("%d",&guess);
    int attempts = 1;

    while (guess != num){
        while (guess > 1000 || 0 > guess){
            printf("your number must be between 0 and 1000: ");
            scanf("%d",&guess);
        }
        attempts += 1;
        if (guess > num){
            printf("\nthe number you guessed is too big, guess again: ");
            scanf("%d",&guess);
        }
        else{
            printf("\nthe number you guessed is too small, guess again: ");
            scanf("%d",&guess);
        }

    }
    printf("you guessed the number correctly, the number was %d and it took you %d attempts\n",num,attempts);
}
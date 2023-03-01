#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

//make a game
//user hass to guess a number from 0-5
//output whwther or not the person is correct

int main()

{
    //generate a random no
    //pseudo random no
    //we need a psedo random no generator
    //outputs the result

    int maxvalue = 5;
    srand(time(NULL));
    int randomNumber = rand() % maxvalue + 1;

    printf("%d",randomNumber);

    //we use modulus operator
    printf("Guess a number 0 -%d\n", maxvalue);
    int input;
    scanf("%d",&input);

    if (input ==randomNumber)
    {
        printf("you win!\n");


    }else
    {
        printf("You lose!\n");
    }

    printf("Thanks for playing!\n");


    return 0;
}
#include <stdio.h>
int main()
{
// NOT A CALENDAR 
// BUT IS A TIC TAC TOE BOARD!!!

//variables
    int i;
    int turn;
    int random_number;
    int player_one_guess, player_two_guess;

    random_number = rand(1,99);
    printf("%i", random_number);

// board


// who goes first...

    printf("I'm thinking of a number between 0 and 100, exclusive\n");
    printf("Player one please enter your guess\n");
    scanf("%i", player_one_guess);
    printf("\n \n \nPlayer two please enter your guess\n");
    scanf("%i", &player_two_guess);

    if (((player_one_guess || player_two_guess)<=0) || ((player_one_guess || player_two_guess >=100))) {
        printf("NO!\n      BAD GUESS!\n");
        exit(0);
    }
    else {
        
// game play
/*
    for (i=0; i<9; i++) {
        if (i%2 == 0) { 
*/


// has errors with random number generator not sure what is happening...


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// stone paper scisor game basically

int StonePaperScissor(char Player, char Computer)
{
    // 1 = computer wins
    // 0 = draw
    //-1 = player win
    // s Stone
    // p Paper
    // r scissoR

    // here we check if player and computer have same output and draw match if true

    if (Player == Computer)
    {
        return 0;
    }
    // computer wins here
    if (Player == 's' && Computer == 'p')
    {
        return 1;
    }

    if (Player == 'p' && Computer == 'r')
    {
        return 1;
    }

    if (Player == 'r' && Computer == 's')
    {
        return 1;
    }

    // player wins here
    if (Player == 's' && Computer == 'r')
    {
        return -1;
    }

    if (Player == 'p' && Computer == 's')
    {
        return -1;
    }

    if (Player == 'r' && Computer == 'p')
    {
        return -1;
    }
}

int main()
{
    // create chars
    char Player, Computer;

    // create a lock variable
    int Statuslock;
    Statuslock = 1;

    do
    {
        // create randon number generator
        srand(time(0));
        int number = rand() % 100 + 1;

        // assign values to computer
        if (number < 33)
        {
            Computer = 's';
        }

        else if (number > 33 && number < 66)
        {
            Computer = 'p';
        }

        else
        {
            Computer = 'r';
        }

        // start game UI after re generating the random number so the computer uses a new option every game

        printf("Starting the game \n");
        printf(" \n");
        printf("Enter 's' for stone, 'p' for paper, 'r' for scissor \n");
        scanf(" %c", &Player);
        printf(" \n");

        int final = StonePaperScissor(Player, Computer);

        if (final == 0)
        {
            printf("Game Draw, Retry again \n");
        }

        else if (final == 1)
        {
            printf("Computer wins, \n");
        }

        else
        {
            printf("Player wins, \n");
        }

        printf("Player selected %c and Computer selected %c \n", Player, Computer);
        printf("\n");

        printf("Do you want to re-play the game? \n");
        printf("Enter 1 for yes and 0 for no. \n");
        scanf(" %d", &Statuslock);

        printf("You chose %d \n", Statuslock);
        printf(" \n");

    } while (Statuslock == 1);

    // display message during exit 
    printf("Thank you for playing \n");
    printf("Simple Game using conditions made by: ");
    printf("Siddhant Mahajan \n");
    printf("Visit https://github.com/SidTheChillGuy for updates \n");
    printf("\n");
    return 0;
}

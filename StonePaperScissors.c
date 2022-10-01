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
    char Player, Computer;
    srand(time(0));
    int number = rand() % 100 + 1;

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

    printf("Starting the game \n");
    printf("Enter 's' for stone, 'p' for paper, 'r' for scissor \n");
    scanf("%c", &Player);

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

    return 0;
}
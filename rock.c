// rock paper and scissors game

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void func(char y, char c)
{
    if (y == c)
    {
        printf("It's a draw!\n");
    }
    else if ((y == 's' && c == 'p') || (y == 'p' && c == 'r') || (y == 'r' && c == 's'))
    {
        printf("You win!\n");
    }
    else
    {
        printf("You lose!\n");
    }
}
int main()
{
    int number;
    srand(time(0));
    number = rand() % 100 + 1;
    char y, c;
    if (number <= 33)
    {
        c = 'r';
    }
    else if (number > 33 && number <= 66)
    {
        c = 'p';
    }
    else
    {
        c = 's';
    }

    printf("Enter r for rock p for paper and s for scissor \n");
    scanf("%c", &y);
    func(y, c);
    printf("Computer chose %c", c);

    return 0;
}
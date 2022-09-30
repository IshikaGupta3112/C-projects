// guess the number

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number, guess, no = 1;
    srand(time(0));
    number = rand() % 100 + 1; // generates random no. between 1 to 100
    // printf("The number is %d",number);
    do
    {
        printf("Guess a no. between 1 and 100\n");
        scanf("%d", &guess);
        if (guess < number)
        {
            printf("Higher no. please\n");
        }
        else if (guess > number)
        {
            printf("Lower no. please\n");
        }
        else
        {
            printf("You guessed it right in %d attempts\n", no);
        }
        no++;
    } while (guess != number);
    return 0;
}

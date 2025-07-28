#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Seeds the random number generator with the current sys time
    srand((unsigned int)time(NULL));

    // Generate a random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;  //rand()%100 will generate btwn 0 and 100 so +1 to get the range crct
    int guesses = 0, guessed;
    do
    {
        printf("Guess the number: ");
        scanf("%d", &guessed);
        guesses++;
        if (guessed < randomNumber)
        {
            printf("Higher number please \n");
        }
        else if (guessed > randomNumber)
        {
            printf("Lower number please \n");
        }
        else
        {
            printf("Congrats you guessed the number in %d guesses!\n", guesses);
        }

    } while (guessed != randomNumber);

    return 0;
}

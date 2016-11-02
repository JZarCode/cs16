/* guess4.c - lets user keep guessing random number until success
   Joel Zarley, 5/2/2013 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

    int target, max, guess = 0;


    while (max <= 1)
  {
printf("Enter maximum value - must be greater than 1: ");
 scanf("%i", &max);
  }

    srand(time(NULL));
    target = 1 + rand() % max;

    while (guess != target)
      {
        printf("Guess a number between 1 and %d: ", max);
        scanf("%i", &guess);

        if (guess == target)
            printf("Correct! Bye.\n");
        else {
            if (guess < target)
                printf("Too low.");
            else
                printf("Too high.");
            printf(" Try again.\n");
        }
      }

    return 0;
}

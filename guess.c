/* guess.c - lets user try to guess a random number
   Joel Zarley & Jospeh Casalenuovo, 4/25/2013 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 3  /* maximum target value */

int main(void) {

    /* DECLARE VARIABLE(S) */
  int guess, target;

    /* FIND A RANDOM TARGET VALUE IN RANGE 1-MAX */
  srand(time(NULL));  
  target = 1 + rand() % (3-1+1);

    /* PROMPT USER FOR GUESS, AND READ THE GUESS */
  printf("Guess a number between 1 and 3: ");
  scanf("%i", &guess);

    /* COMPARE GUESS TO TARGET, AND RESPOND ACCORDINGLY */
  if( guess == target ){
    printf("Correct!\n");
  }
  else{
    printf("Wrong. Target is %i\n", target);
  }
    return 0;
}

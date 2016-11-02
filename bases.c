/* bases.c - gets integer from user and displays in three bases
   Joel Zarley & Joseph Casalenuovo, 4/18/2013 */

#include <stdio.h>

int main(void)
{
    /* DECLARE AN APPROPRIATE VARIABLE */
  int a;
          
    /* PRINT A PROMPT: ASK USER TO ENTER AN INTEGER */
  printf("enter an integer: ");
  
    /* GET THE VALUE FROM THE USER */
  scanf("%i", &a);

    /* DISPLAY VALUE IN DECIMAL, OCTAL AND HEX, WITH LABELS */
  printf("decimal: %d \n", a);
  printf("octal: %o \n", a);
  printf("hex: 0x%x \n", a);

    /* EXIT NORMALLY */
  return 0;
}

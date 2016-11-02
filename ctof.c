/* ctof.c - converts Celsius to Fahrenheit
   Joel Zarley & Joseph Casalenuovo, 4/11/2013 */

#include <stdio.h>

int main()
{
    /* DECLARE VARIABLES */
  double cTemp, fTemp;

    printf("Enter a temperature in degrees C: ");
    scanf("%lf",& cTemp);
      
    /* CALCULATE/STORE FAHRENHEIT VALUE */
    fTemp = (cTemp*(9.0/5.0))+32;
    printf("%g degrees C is %g degrees F\n",
           cTemp, fTemp);

    return 0;
}

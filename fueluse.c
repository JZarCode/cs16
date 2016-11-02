/* Joel Zarley - written April 17, 2013 */

#include <stdio.h>

int main(void) {

/* Declare Variables */

  int startMiles, endMiles, milesDriven;
  float gallons, mpg, liters, kilometers, kpl;

/* Input Commands for Future Calculations */

 printf("enter starting mileage: ");
 scanf("%i", &startMiles);

 printf("enter ending mileage: ");
 scanf("%i", &endMiles);

 printf("enter gallons used: ");
 scanf("%f", &gallons);

/* Blank Line */

 printf("\n");

/* Calculations */

 milesDriven = endMiles - startMiles;
 kilometers = 1.609344 * milesDriven;
 liters = gallons * 3.7854118;
 mpg = milesDriven / gallons;
 kpl = kilometers / liters;

/* Print Results */

 printf("drove %i miles (%.1f kilometers)\n", milesDriven, kilometers);
 printf("used %.1f gallons (%.1f liters)\n", gallons, liters);
 printf("got %.1f mpg (%.1f kpl)\n", mpg, kpl);

 return 0;

}

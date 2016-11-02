/* Joel Zarley & Joseph Casalenuovo, May 9, 2013

 Create the value of "e"  */

#include <stdio.h>

double dfactorial(int n)
 {
int i; double fact=1;

for (i=1; i<=n; i++) {
fact = fact*i;
}
return fact;
 }

int main()
{ 
  double e=1;
  int n;

  for (n=1; n<=170; n++)
    {
      e+= 1/(dfactorial(n));
    }
  printf("e is approximately %.8f\n",e);

  return 0;
}

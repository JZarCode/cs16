#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  struct card
  {
    int num;
    char face;
  };

  typedef struct card Moo;
  Moo c;
  c.num=12;
  c.face= 'S';
    return 0;
}

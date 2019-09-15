#include <stdio.h>
#include "definitions.c"

#ifndef PI
#define PI 3.1416
#endif
#define CAPITAL "Dhaka"


START
  DEKHAO("The value of PI is: %.2f\n", PI)
  DEKHAO("The capital of Bangladesh is: ", CAPITAL)
  return 0;
END

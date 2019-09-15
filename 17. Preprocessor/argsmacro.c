#include <stdio.h>

#define START int main() {
#define END }
#define AGE(x, y) (2019 - 1996)
#define PI 3.1416
#define CAPITAL "Dhaka"
#define DEKHAO(string, element) printf(string, element)

START
  DEKHAO("My age is: %d\n", AGE(2019, 1996));
  DEKHAO("The value of PI: %.2f\n", PI);
  DEKHAO("The capital of Bangladesh is: %s \n", CAPITAL);
  return 0;
END

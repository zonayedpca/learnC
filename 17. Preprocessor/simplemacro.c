#include <stdio.h>

#define START int main() {
#define END }
#define AGE (2019 - 1996)
#define PI 3.1416
#define CAPITAL "Dhaka"
#define DEKHAO printf

START
  DEKHAO("My age is: %d \n", AGE);
  DEKHAO("The value of PI of: %.2f \n", PI);
  DEKHAO("The capital of Bangladesh is: %s \n", CAPITAL);
  return 0;
END

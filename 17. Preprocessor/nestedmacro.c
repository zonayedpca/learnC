#include <stdio.h>

#define START int main() {
#define END }
#define BORN_YEAR 1996
#define CURRENT_YEAR 2019
#define AGE (CURRENT_YEAR - BORN_YEAR)
#define PI 3.1416
#define CAPITAL "Dhaka"
#define STRING(text) (text)
#define DEKHAO(string, element) printf(STRING(string), element)

START
  DEKHAO("My age is: %d\n", AGE);
  DEKHAO("The value of PI: %.2f\n", PI);
  DEKHAO("The capital of Bangladesh is: %s \n", CAPITAL);
  return 0;
END

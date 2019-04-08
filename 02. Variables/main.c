#include <stdio.h>

int main() {
  printf("Variables\n");
  int a, b, c;
  float x, y, z;
  char ch;

  a = 10;
  b = 20;
  c = 30;
  printf("First set of Variables are: %d, %d and %d\n", a, b, c);

  x = 10.10;
  y = 20.20;
  z = 30.30;
  printf("Second set of Variables are: %f, %f and %f\n", x, y, z);

  ch = 'C';
  printf("Third set of Variable is: %c\n", ch);

  return 0;
}

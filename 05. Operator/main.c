#include <stdio.h>

int main() {
  int a = 20;
  int b = 10;

  printf("Arithmetic Operator\n");
  printf("Operator +: %d\n", (a + b));
  printf("Operator -: %d\n", (a - b));
  printf("Operator *: %d\n", (a * b));
  printf("Operator /: %d\n", (a / b));
  printf("Operator ++: %d\n", a++);
  printf("Operator --: %d\n", b--);

  printf("Relational Operator\n");
  printf("Operator ==: %d\n", (a == b));
  printf("Operator !=: %d\n", (a != b));
  printf("Operator >: %d\n", (a > b));
  printf("Operator <: %d\n", (a < b));
  printf("Operator >=: %d\n", (a >= b));
  printf("Operator <=: %d\n", (a <= b));

  printf("Logical Operator\n");
  printf("Operator &&: %d\n", (a && b));
  printf("Operator ||: %d\n", (a || b));
  printf("Operator ! %d\n", (!a));
  return 0;
}

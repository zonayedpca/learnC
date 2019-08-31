#include <stdio.h>

int main() {
  char name[] = "Zonayed Ahmed";
  int num = 100;
  float real = 32.4343;
  char c = 'C';

  printf("Name: %20.5s\n", name);
  printf("Name: %20s\n", name);
  printf("Name: %-20s\n", name);
  printf("Name: %-20.5s\n", name);

  printf("Number: %d\n", num);
  printf("Number: %5d\n", num);
  printf("Number: %-5d\n", num);
  printf("Number: %05d\n", num);

  printf("Real: %f\n", real);
  printf("Real: %2.1f\n", real);
  printf("Real: %e\n", real);
  printf("Real: %5.2e\n", real);

  printf("Character: %c\n", c);
  printf("Character: %d\n", c);
  printf("Character: %2c\n", c);
  printf("Character: %-2c\n", c);

  return 0;
}

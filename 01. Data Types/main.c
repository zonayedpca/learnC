#include <stdio.h>

int main() {
  printf("Integer Types\n");
  printf("The size of char is: %d bytes\n", sizeof(char));
  printf("The size of int is: %d bytes\n", sizeof(int));
  printf("The size of short is: %d bytes\n", sizeof(short));
  printf("The size of long is: %d bytes\n", sizeof(long));

  printf("Floating Types\n");
  printf("The size of float is: %d bytes\n", sizeof(float));
  printf("The size of double is: %d bytes\n", sizeof(double));
  printf("The size of 'long double' is: %d bytes\n", sizeof(long double));
  return 0;
}

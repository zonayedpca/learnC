#include <stdio.h>

extern int value;

void printFunction() {
  static int count = 0;
  count++;
  printf("Count: %d\n", count);
}

int main() {
  int value = 10;
  register int registerValue = 20;
  printf("extern value: %d\n", value);
  printf("register value: %d\n", registerValue);
  for(int i = 0; i < 10; ++i) {
    printFunction();
  }
  return 0;
}

#include <stdio.h>
#define CONSTANT_DEF 10

int main() {
  const int constant = 20;
  printf("Constant by define: %d\n", CONSTANT_DEF);
  printf("Constant by const keyword: %d\n", constant);
  return 0;
}

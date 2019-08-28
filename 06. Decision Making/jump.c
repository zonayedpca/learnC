#include <stdio.h>

int main() {
  int num;
  range:
  printf("Enter a number between 1 - 100: ");
  scanf("%d", &num);
  if(num < 0 || num > 100) {
    goto range;
  }
  printf("Entered number was %d\n", num);
  return 0;
}

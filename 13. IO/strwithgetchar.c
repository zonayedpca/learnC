#include <stdio.h>

int main() {
  char name[100];
  char c;
  int index = 0;
  printf("What is you name: ");
  while((c = getchar()) != '\n') {
    name[index] = c;
    index++;
  }
  name[index] = '\0';
  printf("Welcome Mr. %s\n", name);
  return 0;
}

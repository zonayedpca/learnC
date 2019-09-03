#include <stdio.h>
#include <stdlib.h>

int main() {
  char *name;
  name = malloc(sizeof(char) * 20);
  if(name) {
    printf("Enter your name: ");
    gets(name);
    printf("Your name is: %s \n", name);
    free(name);
  } else {
    printf("Something went wrong...\n");
  }
  return 0;
}

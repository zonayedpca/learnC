#include <stdio.h>
#include <stdlib.h>

int main() {
  char *name;
  name = calloc(5, sizeof(char));
  if(name) {
    printf("Enter a 5 character name: ");
    gets(name);
    printf("You entered: %s \n", name);
    name = realloc(name, 100);
    if(name) {
      printf("Enter a larget name now: ");
      gets(name);
      printf("You entered: %s\n", name);
    }
    free(name);
  } else {
    printf("SOmething went wrong... \n");
  }
  return 0;
}

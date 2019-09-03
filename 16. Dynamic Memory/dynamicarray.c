#include <stdio.h>
#include <stdlib.h>

int main() {
  char *arr;
  arr = calloc(20, sizeof(char));
  if(arr != NULL) {
    printf("Enter your name: ");
    gets(arr);
    printf("My name is %s\n", arr);
    free(arr);
  } else {
    printf("Something went wrong...\n");
  }
  return 0;
}

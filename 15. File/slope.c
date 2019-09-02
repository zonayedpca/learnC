#include <stdio.h>
#define HEIGHT 50

void printbar(int, FILE*);

int main() {
  FILE *file = fopen("slope.txt", "w");
  if(!file) {
    printf("Something went wrong! Please, Try Again...\n");
  } else {
    char name[100];
    printf("Enter your name: ");
    gets(name);

    printbar(30, file);
    fprintf(file, "Welcome to the slope of the uinverse\n");
    fprintf(file, "Name: %s\n", name);
    fprintf(file, "Height: %d \n", HEIGHT);
    printbar(30, file);

    for(int i = 1; i < HEIGHT; ++i) {
      for(int j = 0; j < i; ++j) {
        putc('*', file);
      }
      putc('\n', file);
    }
  }
  return 0;
}

void printbar(int length, FILE *file) {
  for(int i = 0; i <= length; ++i) {
    putc('=', file);
  }
  putc('\n', file);
}

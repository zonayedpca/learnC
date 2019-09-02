#include <stdio.h>
#define HEIGHT 50

void printbar(int, FILE*);
void writeData(FILE*);
void showData(FILE*);

int main() {
  FILE *file = fopen("slope.txt", "w+");
  if(!file) {
    printf("Something went wrong! Please, Try Again...\n");
  } else {
    writeData(file);
    printf("Writen data successfully! Now showing the data...\n");
    showData(file);
  }
  fclose(file);
  return 0;
}

void printbar(int length, FILE *file) {
  for(int i = 0; i <= length; ++i) {
    putc('=', file);
  }
  putc('\n', file);
}

void writeData(FILE *file) {
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

void showData(FILE *file) {
  char c;
  rewind(file);
  while(!feof(file)) {
    c = getc(file);
    printf("%c", c);
  }
  printf("\n");
}

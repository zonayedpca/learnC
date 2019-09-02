#include <stdio.h>
#define MAX_FILE 2

void copyFile(FILE*, FILE*);

int main(int argc, char const *argv[]) {
  if(argc < (MAX_FILE + 1) || argc > (MAX_FILE + 1)) {
    printf("Please provide valid arguments. Example: copy source destination\n");
  }

  FILE *src = fopen(argv[1], "r");

  if(!src) {
    printf("Please provide valid file name...\n");
  } else {
    FILE *dest = fopen(argv[2], "w");
    copyFile(src, dest);
    fclose(src);
    fclose(dest);
  }

  return 0;
}

void copyFile(FILE *src, FILE *dest) {
  printf("Start copying...\n");
  char c;
  while((c = getc(src)) != EOF) {
    putc(c, dest);
  }
  printf("Successfully copied!\n");
}

#include <stdio.h>
#define MAX 10

int main() {
  int limit;
  do {
    printf("Enter any number between 1 - 100: ");
    scanf("%d", &limit);
    if(limit < 0) {
      printf("Too small to procced further. Please, Try Again...\n");
    } else if(limit > 100) {
      printf("Too large to procced further. Please, Try Again...\n");
    }
  } while(limit <= 0 || limit > 100);
  for(int i = 0; i < limit; ++i) {
    printf("Counting for number: %d\n", (i + 1));
    for(int j = 0; j < MAX; ++j) {
      printf("%3d x %3d = %3d\n", (i + 1), (j + 1), ((i + 1) * (j + 1)));
    }
    printf("\n");
  }
  return 0;
}

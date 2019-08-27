#include <stdio.h>

struct student {
  char name[100];
  int height;
  double width;
};

int main() {
  struct student student1 = { "Zawad Ahmed", 6, 10.1 };
  struct student student2 = { "Maryam Ahmed", 7, 13.4 };
  printf("Height of the %s is: %d And Width is: %0.2f\n", student1.name, student1.height, student1.width);
  printf("Height of the %s is: %d And Width is: %0.2f\n", student2.name, student2.height, student2.width);
  return 0;
}

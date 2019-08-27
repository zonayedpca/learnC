#include <stdio.h>

struct student {
  int height;
  double width;
};

int main() {
  struct student student1 = { 6, 10.1 };
  struct student student2 = { 7, 13.4 };
  printf("Height of the First Student is: %d And Width is: %0.2f\n", student1.height, student1.width);
  printf("Height of the Second Student is: %d And Width is: %0.2f\n", student2.height, student2.width);
  return 0;
}

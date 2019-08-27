#include <stdio.h>
#include <string.h>
#define STUDENT_NUMBER 3

struct {
  char name[100];
  int age;
} student[STUDENT_NUMBER];

int main() {
  for(int i = 0; i < STUDENT_NUMBER; ++i) {
    printf("Name of the %d student: ", (i + 1));
    scanf("%s", student[i].name);
    printf("Age of this student: ");
    scanf("%d", &student[i].age);
  }
  for(int i = 0; i < STUDENT_NUMBER; ++i) {
    printf("%s is %d years old\n", student[i].name, student[i].age);
  }
  return 0;
}

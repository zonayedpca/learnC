#include <stdio.h>
#include <string.h>

typedef struct {
  char name[100];
  int age;
  float salary;
} details;

void print(details*);

int main(int argc, char const *argv[]) {
  details person1;
  strcpy(person1.name, "Zonayed");
  person1.age = 10;
  person1.salary = 10000.23224;
  print(&person1);
  return 0;
}

void print(details *str) {
  printf("My name is %s, I am %d years old. And My salary is: BDT%4.2f\n", str->name, str->age, str->salary);
}

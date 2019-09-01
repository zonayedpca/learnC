#include <stdio.h>

int *num(int, int);

int main() {
  int n1, n2;
  int *result;
  printf("Enter A Number: ");
  scanf("%d", &n1);
  printf("Enter Another Number: ");
  scanf("%d", &n2);
  result = num(n1, n2);
  printf("The Total is: %d \n", *result);
  return 0;
}

int *num(int a, int b) {
  int sum = a + b;
  int *total = &sum;
  return total;
}

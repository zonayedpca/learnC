#include<stdio.h>

typedef struct {
  char title[100];
  char author[100];
  int sale;
  double income;
} book;

int main() {
  book book1 = { "The art of not giving a f*ck", "Benjamin Karima", 2321, 123.242 };
  printf("The book %s is written by %s, sold %d copies and total worth of %.2f\n", book1.title, book1.author, book1.sale, book1.income);
  return 0;
}

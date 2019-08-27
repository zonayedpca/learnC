#include <stdio.h>

typedef struct {
  char name[100];
  int quantity;
  double price;
} superstore;

void print(superstore);
superstore increased(superstore);

int main() {
  superstore ginger = { "Ginger", 100, 10.23 };
  superstore roshun = { "Rosun", 245, 224.23 };
  printf("Before Price Increased...\n");
  print(ginger);
  print(roshun);
  printf("After Price Increased...\n");
  superstore gingerInc = increased(ginger);
  superstore roshunInc = increased(roshun);
  print(gingerInc);
  print(roshunInc);
  return 0;
}

void print(superstore item) {
  printf("%d %s is priced %.2f\n", item.quantity, item.name, item.price);
}

superstore increased(superstore item) {
  item.price *= 2;
  return item;
}

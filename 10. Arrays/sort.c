#include <stdio.h>
#define ARR_SIZE 10

void sort(int[], int);
void print(int[], int);

int main() {
  int arr[] = {23, 52, 42, 46, 32, 67, 57, 43, 64, 32};
  printf("Before Sorting...\n");
  print(arr, ARR_SIZE);
  printf("After Sorting...\n");
  sort(arr, ARR_SIZE);
  print(arr, ARR_SIZE);
  return 0;
}

void sort(int arr[], int n) {
  for(int i = 0; i < n; ++i) {
    for(int j = 0; j < n - 1; ++j) {
      if(arr[i] > arr[i + 1]) {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = arr[i];
      }
    }
  }
}

void print(int arr[], int n) {
  for(int i = 0; i < n; ++i) {
    printf("%d", arr[i]);
    (i == n - 1) ? printf("\n") : printf(", ");
  }
}

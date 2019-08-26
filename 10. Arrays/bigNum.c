#include <stdio.h>
#define ARR_SIZE 10

int findbig(int[], int);

int main() {
  int arr[] = {23, 52, 42, 46, 32, 67, 57, 43, 64, 32};
  int result = findbig(arr, ARR_SIZE);
  printf("The biggest number is: %d\n", result);
  return 0;
}

int findbig(int arr[], int n) {
  int max = arr[0];
  for(int i = 0; i < n; ++i) {
    if(arr[i] > max) {
      max = arr[i];
    }
  }
  return max;
}

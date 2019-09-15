#include <stdio.h>

#define MACHINE
#define START int main() {
#define END }
#define SUCCESS return 0;
#define DEKHAO(arg) printf(arg);

START
  #ifdef MACHINE
  {
    DEKHAO("The machine is defined")
  }
  #else
  {
    DEKHAO("The machine is not defined")
  }
  #endif
  SUCCESS
END

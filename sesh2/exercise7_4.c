#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
  float numbers[10];
  float sum = 0;
  for(int i = 0; i < 10; i++) {
    sscanf(argv[i + 1], "%f", &numbers[i]);
    sum += numbers[i];
  }
  printf("Average %f", sum/10);
  return 0;
}

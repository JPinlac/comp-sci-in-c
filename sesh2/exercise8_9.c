#include <stdio.h>
#include <stdlib.h>

int gcd (int u, int v) {
  int temp;
  while (v != 0) {
    temp = u % v;
    u = v;
    v = temp;
  }
  return u;
}
int main(int argc, char* argv[]) {
  int u = strtol(argv[1], NULL, 10);
  int v = strtol(argv[2], NULL, 10);
  int lcm = u * v / gcd(u, v);
  printf("%d\n", lcm);
  return 0;
}

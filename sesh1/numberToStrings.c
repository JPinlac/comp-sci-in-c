#include <stdio.h>
#include <stdlib.h>

int findn(int num) {
  if (num < 10) return 1;
  if (num < 100) return 2;
  if (num < 1000) return 3;
  return 4;
}

int returnDivisor(int digitSpot) {
  if (digitSpot == 3) return 100;
  if (digitSpot == 2) return 10;
  if (digitSpot == 1) return 1;
  return 1000;
}

char *numberToEnglish(int num) {
  switch (num) {
    case 0:
      return "zero";
      break;
    case 1:
      return "one";
      break;
    case 2:
      return "two";
      break;
    case 3:
      return "three";
      break;
    case 4:
      return "four";
      break;
    case 5:
      return "five";
      break;
    case 6:
      return "six";
      break;
    case 7:
      return "seven";
      break;
    case 8:
      return "eight";
      break;
    case 9:
      return "nine";
      break;
  }
  return "Invalid Number";
}

int
main (int argc, char **argv)
{
  long number = strtol(argv[1], NULL, 10); 
  int num = number;
  int remainder = number;
  printf("%d\n", num);
  for (int i = 0; i < findn(num); ++i) {
      int currentDigit = findn(num) - i;
      printf("%s ", numberToEnglish(remainder / returnDivisor(currentDigit)));
      remainder = remainder % returnDivisor(currentDigit);
  }
  return 0;
}

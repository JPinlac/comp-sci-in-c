#include <stdio.h>
typedef enum { false, true } bool;

int findString(char text[], char searchTerm[]) {
  char character;
  int i = 0;

  do {
    character = text[i];
    
    int j = 0;
    bool termFound = false;
    char searchCharacter;
    
    do {
      searchCharacter = searchTerm[j];
      if (text[i + j] != searchTerm[j]) {
        termFound = false;
        break;
      } else {
        termFound = true;
      }
      j++;
    } while ( searchCharacter != '\0');

    if ( termFound == true ) {
      return i;
    }
    i++;
  } while ( character != '\0');
  return -1;
}

int main(int argc, char *argv[]) {
  printf("lo in Hello, index = %i\n", findString("Hello", "lo"));
  printf("bird in The bird, index = %i\n", findString("The bird", "bird"));
}

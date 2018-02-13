#include <stdio.h>
#include <stdlib.h>

struct Node {
  int number;
  struct Node* next;
  struct Node* prev;
};

struct Node* head;


int main(int argc, char *argv[]) {
  void printList();
  
  //struct Node* head = (struct Node*)malloc(sizeof(struct Node));
  head = (struct Node*)malloc(sizeof(struct Node));
  struct Node* firstNode = (struct Node*)malloc(sizeof(struct Node));
  struct Node* secondNode = (struct Node*)malloc(sizeof(struct Node));
  head->number = 99;
  head->prev = NULL;
  head->next = firstNode;

  firstNode->number = 11;
  firstNode->prev = head;
  firstNode->next = secondNode;

  secondNode->number = 22;
  secondNode->prev = firstNode;
  secondNode->next = NULL;

  printList();
}

void printList() {
  struct Node* nextNode = head;
  do {
    printf("%d \n", nextNode->number);
    nextNode = nextNode->next;
  } while ( nextNode != NULL);
}

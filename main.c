#include <stdio.h>

int max();
void enums(void);

int main(void) {
  printf("TransparentPeskyBrains\n");

  printf("%d\n", max(5, 6));

  enums();

  return 0;
}

int max(int a, int b) {
  return a > b ? a : b;
}

void enums(void) {

  typedef enum answer answer;
  enum answer { no, yes, };
  {
    enum confirm { no = 100, yes = 200};
  }
  answer q1 = yes;
  printf("Answer: %d\n", q1); 
  q1 = 100;
  printf("Answer: %d\n", q1); 

  return;
}

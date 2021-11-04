#include <stdio.h>
#include <stdlib.h>

int main(void) {
  
  int a, b, c;

  printf("Digite 3 números: \n");
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);

  if (a > b) {
    if (a > c) {
      printf("O número %d foi o maior.\n", a);
    } else {
      printf("O número %d foi o maior.\n", c);
    }
  } else {
    if (b > c) {
      printf("O número %d foi o maior.\n", b);
    } else {
      printf("O número %d foi o maior.\n", c);
    }
  }
    return 0;
}
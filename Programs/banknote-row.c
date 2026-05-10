#include <stdio.h>

int main() {
  int sum, b20, b10, b5, b1;
  printf("Введите сумму в долларах: \n");
  scanf("%d", &sum);
  b20 = sum / 20;
  sum = sum % 20;
  b10 = sum / 10;
  sum = sum % 10;
  b5 = sum / 5;
  sum = sum % 5;
  b1 = sum;

  printf("Купюр в 20$: %d\n", b20);
  printf("Купюр в 10$: %d\n", b10);
  printf("Купюр в 5$: %d\n", b5);
  printf("Купюр в 1$: %d\n", b1);
  return 0;
}

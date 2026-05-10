#include <stdio.h>

int main() {
  float price, sum, tax = 0.05;
  printf("Введите сумму:\n");
  scanf("%f", &price);
  sum = price * (1.0 + tax);
  printf("Сумма с налогом: %.2f\n", sum);

  return 0;
}

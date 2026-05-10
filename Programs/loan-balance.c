#include <stdio.h>

int main() {
  float sum, percent, payment;
  printf("Введите сумму кредита:\n");
  scanf("%f", &sum);
  printf("Введите процентную ставку:\n");
  scanf("%f", &percent);
  printf("Введите ежемесячный платеж:\n");
  scanf("%f", &payment);
  
  percent = percent / 100.0 / 12.0;
  sum = sum + (sum * percent) - payment;
  printf("Сумма после первого платежа: %.2f\n", sum);
  sum = sum + (sum * percent) - payment;
  printf("Сумма после второго платежа: %.2f\n", sum);
  sum = sum + (sum * percent) - payment;
  printf("Сумма после третьего платежа: %.2f\n", sum);

  return 0;
}

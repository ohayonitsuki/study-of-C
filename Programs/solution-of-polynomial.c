#include <stdio.h>

int main() {
  int x, solution;
  printf("Введите значение x:\n");
  scanf("%d", &x);
  solution = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
  printf("Ответ: %d\n", solution);

  return 0;
}

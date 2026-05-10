#include <stdio.h>

int main(void) {
  int height, width, lenght, volume, weight;
  printf("Введите высоту коробки\n");
  scanf("%d", &height);
  printf("Введите ширину коробки\n");
  scanf("%d", &width);
  printf("Введите длину коробки\n");
  scanf("%d", &lenght);

  volume = height * width * lenght;

  weight = (volume + 165) / 166;
  printf("Объем: %d\n", volume);
  printf("Размерный вес: %d\n", weight);
  return 0;
}

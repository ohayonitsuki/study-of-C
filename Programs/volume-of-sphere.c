#include <stdio.h>
#include <math.h>

int main() {
  double v, r;
  printf("Введите радиус сферы: \n");
  scanf("%lf", &r);
  v = 4.0 / 3.0 * M_PI * pow(r, 3);
  printf("Объем сферы: %lf\n", v);
  return 0;

}

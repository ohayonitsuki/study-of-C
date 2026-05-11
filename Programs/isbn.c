#include <stdio.h>

int main() {
    int prefix_gsi, id_group, publisher_code, catalog_number, check_digit;

    printf("Введите номер ISBN:\n");
    scanf("%3d-%1d-%3d-%5d-%1d", &prefix_gsi, &id_group, &publisher_code, &catalog_number, &check_digit);
    printf("Префикс GSI: %3d\n", prefix_gsi);
    printf("Идентификатор группы: %1d\n", id_group);
    printf("Код издателя: %3d\n", publisher_code);
    printf("Номер по каталогу: %5d\n", catalog_number);
    printf("Контрольная цифра: %1d\n", check_digit);

    return 0;
}

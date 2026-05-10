#include <stdio.h>

int main() {
    int day, month, year;
    printf("Введите дату (мм/дд/гггг):\n");
    scanf("%02d/%02d/%04d", &month, &day, &year);
    printf("Вы указали дату: %04d%02d%02d \n", year, month, day);

    return 0;
}

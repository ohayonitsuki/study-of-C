#include <stdio.h>

int main() {
    int day, month, year, product_number;
    float price_per_piece;

    printf("Введите номер товара: \n");
    scanf("%d", &product_number);
    printf("Введите цену за единицу:\n");
    scanf("%f", &price_per_piece);
    printf("Введите дату (дд/мм/гггг):\n");
    scanf("%d/%d/%d", &day, &month, &year);
    printf("Товар\tЦена за единицу\tДата покупки\n");
    printf("%-d\t$%7.2f\t%02d.%02d.%-4d г.\n", product_number, price_per_piece, day, month, year);
    return 0;
}

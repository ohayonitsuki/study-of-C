#include <stdio.h>

int main() {
    int country_code, operator_code, subscriber_num_1, subscriber_num_2, subscriber_num_3;

    printf("Введите номер телефона в формате +7(999)-999-99-99\n");
    scanf("+%1d(%3d)-%3d-%2d-%2d", &country_code, &operator_code, &subscriber_num_1, &subscriber_num_2, &subscriber_num_3);
    printf("Ваш номер: %1d%3d%3d%2d%2d\n", country_code, operator_code, subscriber_num_1, subscriber_num_2, subscriber_num_3);
}

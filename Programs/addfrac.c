#include <stdio.h>

int main() {
    int num1, num2, denum1, denum2, result_num, result_denum;
    printf("Введите две дроби, разделённые знаком плюс:\n");
    scanf("%d/%d + %d/%d", &num1, &denum1, &num2, &denum2);
    result_num = num1 * denum2 + num2 * denum1;
    result_denum = denum1 * denum2;
    printf("Сумма дробей равна: %d/%d\n", result_num, result_denum);

}

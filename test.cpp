#include <iostream>
#include <random>
#include <time.h>
#include <stdint.h>
#include "calculator.h"

#define MAX_ITERATIONS 1000

int rand_(int min, int max) {
    return min + rand() % ((long long int)max - min + 1);
}

int main() {
    setlocale(LC_ALL, "Russian");
    srand(time(0));
    const int count_signs = 5;
    char signs[count_signs]{ '+', '-', '*', '/', '%' };
    int a, b, result = 0;
    int ideal_result;
    int (*math_actions[count_signs])(int, int) { add_m, sub_m, mul_m, div_m, mod_m };
    bool isCorrect = true;
    for (int i = 0; i < count_signs && isCorrect; i++) {
        for (int j = 0; j < MAX_ITERATIONS && isCorrect; j++) {
            a = rand_(INT32_MIN, INT32_MAX);
            b = rand_(INT32_MIN, INT32_MAX);
            result = math_actions[i](a, b);
            if (signs[i] == '+') ideal_result = a + b;
            else if (signs[i] == '-') ideal_result = a - b;
            else if (signs[i] == '*') ideal_result = a * b;
            else if (signs[i] == '/') ideal_result = a / b;
            else if (signs[i] == '%') ideal_result = a % b;
            if (result != ideal_result)
                isCorrect = false;
        }
    }
    if (isCorrect) cout << "Тестирование успешно!" << endl;
    else cout << "Ошибка при тестировании!" << endl;
    system("pause");
    return 0;
}
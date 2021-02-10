#include <iostream>
#include "calculator.h"
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int a, b, result = 0;
    char sign = '\0';
    do {
        cout << "Введите 2 числа: ";
        cin >> a >> b;
        cout << "Введите 0 для выхода или" << endl;
        cout << "арифметическую операцию (+,-,*,...): ";
        cin >> sign;
		if(sign == '+') result = add_m(a, b);
        system("cls");
        switch (sign) {
        case '+':
            result = add_m(a, b);
            break;
        case '-':
            result = sub_m(a, b);
            break;
        case '*':
            result = mul_m(a, b);
            break;
        case '/':
            result = div_m(a, b);
            break;
        case '%':
            result = mod_m(a, b);
            break;
		case '^':
			result = pow_m(a, b);
			break;
        default:
            cout << "Вы ввели не правильную операцию!" << endl;
            break;
        }
        cout << "Результат (result =): " << result << endl;
    } while (sign != '0');
    cout << "Итоговый результат: " << result << endl;
    system("pause");
    return 0;
}
#include <iostream>
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
        system("cls");
        cout << "Результат (result =): " << result << endl;
    } while (sign != '0');
    cout << "Итоговый результат: " << result << endl;
    system("pause");
    return 0;
}
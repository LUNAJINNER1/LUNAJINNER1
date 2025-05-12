#include <iostream>
using namespace std;

int main() {
    char op;
    double num1, num2;
    bool running = true;

    cout << "Простой калькулятор на C++\n";
    cout << "--------------------------\n";

    while (running) {
        cout << "\nВыберите операцию (+, -, *, /) или 'q' для выхода: ";
        cin >> op;

        if (op == 'q' || op == 'Q') {
            running = false;
            continue;
        }

        cout << "Введите первое число: ";
        cin >> num1;
        cout << "Введите второе число: ";
        cin >> num2;

        switch (op) {
            case '+':
                cout << "Результат: " << num1 + num2 << "\n";
                break;
            case '-':
                cout << "Результат: " << num1 - num2 << "\n";
                break;
            case '*':
                cout << "Результат: " << num1 * num2 << "\n";
                break;
            case '/':
                if (num2 != 0) {
                    cout << "Результат: " << num1 / num2 << "\n";
                } else {
                    cout << "Ошибка: деление на ноль!\n";
                }
                break;
            default:
                cout << "Неверная операция! Попробуйте снова.\n";
                break;
        }
    }

    cout << "\nПрограмма завершена. До свидания!";
    return 0;
} 
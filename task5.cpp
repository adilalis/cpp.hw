#include <iostream>
#include <string>

// Именованные константы для ошибок
const std::string ERR_DIV_ZERO = "Ошибка: Деление на ноль нельзя";
const std::string ERR_UNKNOWN_OP = "Ошибка: Неизвестная операция";

double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b) { return a / b; }

int main() {
    double num1{0.0}, num2{0.0}; // Унифицированная инициализация
    char op{' '};

    std::cout << "Введите число,операция,число: ";
    std::cin >> num1 >> op >> num2;

    if (op == '/' && num2 == 0) {
        std::cerr << ERR_DIV_ZERO << std::endl;
    } else {
        double result{0.0};
        bool valid{true};

        if (op == '+') result = add(num1, num2);
        else if (op == '-') result = subtract(num1, num2);
        else if (op == '*') result = multiply(num1, num2);
        else if (op == '/') result = divide(num1, num2);
        else {
            std::cerr << ERR_UNKNOWN_OP << std::endl;
            valid = false;
        }

        if (valid) std::cout << "Результат: " << result << std::endl;
    }
    return 0;
}

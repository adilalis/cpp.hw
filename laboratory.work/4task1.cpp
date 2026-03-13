#include <iostream>
#include <string>
using namespace std;

const string ERR_DIV_ZERO = "Ошибка: Деление на ноль нельзя";
const string ERR_UNKNOWN_OP = "Ошибка: Неизвестная операция";

double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b) { return a / b; }

int main() {
    double num1{0.0}, num2{0.0};
    char op{' '};

    cout << "Введите число,операция,число: ";
    cin >> num1 >> op >> num2;

    if (op == '/' && num2 == 0) {
        cerr << ERR_DIV_ZERO << endl;
    } else {
        double result{0.0};
        bool valid{true};

        if (op == '+') result = add(num1, num2);
        else if (op == '-') result = subtract(num1, num2);
        else if (op == '*') result = multiply(num1, num2);
        else if (op == '/') result = divide(num1, num2);
        else {
            cerr << ERR_UNKNOWN_OP << endl;
            valid = false;
        }

        if (valid) cout << "Результат: " << result << endl;
    }
    return 0;
}

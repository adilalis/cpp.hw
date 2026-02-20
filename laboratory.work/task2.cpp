#include <iostream>
#include <iomanip>
#include <string>
#include <limits>

using namespace std;

int main() {

    string product;
    double price = 0.0;
    int quantity = 0;

    cout << "Введите название товара: ";
    getline(cin, product);

    cout << "Введите цену за единицу: ";
    cin >> price;

    if (cin.fail()) {
        cout << "Ошибка!" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return 1;
    }

    cout << "Количество: ";
    cin >> quantity;

    if (cin.fail()) {
        cout << "Ошибка!" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return 1;
    }

    double total = price * quantity;

    cout << "\n\t--- Чек ---\n";

    cout << fixed << setprecision(2);

    cout << "Товар:\t\t" << product << endl;
    cout << "Цена:\t\t" << price << endl;
    cout << "Количество:\t" << quantity << endl;
    cout << "Итого:\t\t" << total << endl;

    return 0;
}

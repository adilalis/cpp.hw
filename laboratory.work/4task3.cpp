#include <iostream>
using namespace std;

const double KG_TO_LBS = 2.20462;
const double M_TO_KM = 0.001;

void convertTemperature(double celsius) {
    double fahrenheit = celsius * 9/5 + 32;
    double kelvin = celsius + 273.15;
    cout << celsius << " C = " << fahrenheit << " F / " << kelvin << " K" << endl;
}

int main() {
    int choice{0};
    double value{0.0};

    cout << "1. Вес (кг - фунты)\n2. Температура (C - F/K)\nВыбор: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Введите кг: ";
        cin >> value;
        cout << value * KG_TO_LBS << " lbs" << endl;
    } else if (choice == 2) {
        cout << "Введите градусы Цельсия: ";
        cin >> value;
        convertTemperature(value);
    }
    return 0;
}

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double number = 0.0;

    cout << "Число: ";
    cin >> number;

    cout << "\nФормат\t\tЗначение\n";
    cout << "------------------------------\n";

    cout << fixed << setprecision(3);
    cout << "fixed\t\t" << number << "\n";

    cout << scientific << setprecision(5);
    cout << "scientific\t" << number << "\n";

    cout << hexfloat;
    cout << "hexfloat\t" << number << "\n";

    cout << defaultfloat;
    cout << "default\t\t" << number << "\n";

    return 0;
}

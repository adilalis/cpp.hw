#include <iostream>
#include <string>
using namespace std;


int value(char c) {
    if (c == 'A') return 0;
    if (c == 'S') return 1;
    if (c == 'D') return 2;
    if (c == 'F') return 3;
    if (c == 'G') return 4;
    if (c == 'H') return 5;
    if (c == 'J') return 6;
    return -1;
}

int main() {
    string num;
    cout << "Введите 4-значное число (ASD-система): ";
    cin >> num;

    int decimal = 0;

    for (int i = 0; i < 4; i++) {
        decimal = decimal * 7 + value(num[i]);
    }

    cout << "Ваша система: " << num << endl;
    cout << "В десятичной: " << decimal << endl;

    return 0;
}

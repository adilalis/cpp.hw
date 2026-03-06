#include <iostream>
using namespace std;

int main() {

    int health = 100;
    bool hasSword = true;
    int choice;

start:

    cout << "Выберите дверь (1-3): ";
    cin >> choice;

    if (choice == 1) goto door1;
    if (choice == 2) goto door2;
    if (choice == 3) goto door3;

    cout << "Ошибка! Попробуйте снова.\n";
    goto start;


door1:
    cout << "Вы нашли сокровище!" << endl;
    return 0;


door2:
    health = (health > 50) ? health - 20 : health - 50;
    cout << "Вы попали в ловушку!" << endl;
    cout << "Здоровье: " << health << endl;
    return 0;


door3:
    cout << (hasSword ? "Вы победили!" : "Вы проиграли!") << endl;
    return 0;

}

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int secret = rand() % 90 + 10; // число от 10 до 99
    int guess;
    int attempts = 0;

    cout << "Guess the number (10-99)" << endl;

    while (true) {
        cin >> guess;

        if (guess < 0) {
            cout << "Game stopped." << endl;
            break;
        }

        attempts++;

        if (guess == secret) {
            cout << "Correct!" << endl;
            cout << "Attempts: " << attempts << endl;
            break;
        }
        else if (guess < secret) {
            cout << "More" << endl;
        }
        else {
            cout << "Less" << endl;
        }
    }

    cout << "Secret number was: " << secret << endl;

    return 0;
}

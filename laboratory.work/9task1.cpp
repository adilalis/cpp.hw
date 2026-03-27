#include <iostream>
#include <string>
using namespace std;

void swapAdjacentPairs(string& s) {
    for (int i = 0; i < s.length() - 1; i += 2) {
        char temp = s[i];
        s[i] = s[i + 1];
        s[i + 1] = temp;
    }
}

int main() {
    string s = "Python";
    swapAdjacentPairs(s);
    cout << s; // yPhtno
}

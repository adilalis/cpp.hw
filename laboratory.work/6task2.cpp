#include <iostream>
using namespace std;

int main(){
    double length,width,weight;
    int isScratched;
    
    cout << "Длина: ";
    cin >> length;
    
    cout << "Ширина: ";
    cin >> width;
    
    cout << "Вес: ";
    cin >> weight;
    
    cout << "Царапина: ";
    cin >> isScratched;
    
    if (length >= 10 && length <= 12.5 &&
    width > 5.0 && width < 7.0 &&
    (weight < 1.5 || isScratched == 0)){
    
    cout << "Принято";
   }
   else {
        cout << "Не принято";
   }
    
   return 0;
}

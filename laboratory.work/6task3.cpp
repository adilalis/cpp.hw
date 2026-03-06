#include <iostream>
using namespace std;

int main(){
    int day;
    
    cout << "Number 1-7: ";
    cin >> day;
    
    switch (day) {
    
    case 1:
        cout << "Monday";
        break;
    
    case 2:
        cout << "Tuesday";
        break;
        
    case 3:
        cout << "Wednesday";
        break;
        
    case 4:
        cout << "Thursday";
        break;
        
    case 5:
        cout << "Friday";
        break;
    
    case 6:
        cout << "Выходной!" << endl;
        cout << "Saturday";
        break;
        
    case 7:
        cout << "Выходной!" << endl;
        cout << "Sunday";
        break;
      
    default:
        cout << "Error,Number 1-7";
    }
    return 0;
}

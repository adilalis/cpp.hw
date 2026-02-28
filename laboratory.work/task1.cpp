#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    const string TITLE = "Параметры";

    double width = 0.0;
    double height = 0.0;

    cout << "Ширина: ";
    cin >> width;

    cout << "Высота: ";
    cin >> height;

    double area = width * height;
    double perimeter = 2 * (width + height);

    cout << "\n\t" << TITLE << "\n\n";

    cout << fixed << setprecision(2);

    cout << setw(15) << "Параметр" << setw(15) << " Значение" << endl;

    cout << setw(15) << "Ширина" << setw(15) << width << endl;


    cout << setw(15) << "Высота" << setw(15) << height << endl;
    

    cout << setw(15) << "Площадь" << setw(15) << area << endl;
   

    cout << setw(15) << "Периметр" << setw(15) << perimeter << endl;
   

    return 0;
}

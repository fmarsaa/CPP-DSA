#include <iostream>
using namespace std;



// area
double Area(double length) {
    return length * length;
}

// perimeter
double Perimeter(double length) {
    return 4 * length;
}

int main() {
    double side;

    cout << "Enter the length of the square: ";
    cin >> side;

    double area = Area(side);
    double perimeter = Perimeter(side);

    cout << "Area = " << area << endl;
    cout << "Perimeter = " << perimeter << endl;

    return 0;
}
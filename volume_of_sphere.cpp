#include <iostream>
#include <cmath>
using namespace std;



int main() {
    double radius;

    cout << "Enter radius: ";
    cin >> radius;

const double PI = 3.142;
    // using pow() to compute r^3
    double volume = (4 / 3) * PI * pow(radius, 3);

    cout << "Volume = " << volume << endl;

    return 0;
}
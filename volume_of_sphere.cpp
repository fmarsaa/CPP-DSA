#include <iostream>
#include <cmath>
#include <corecrt_math_defines.h>
using namespace std;



int main() {
    double radius;

    cout << "Enter radius: ";
    cin >> radius;

    // using pow() to compute r^3
    double volume = (4 / 3) * M_PI * pow(radius, 3);

    cout << "Volume = " << volume << endl;

    return 0;
}
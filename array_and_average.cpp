#include <iostream>
using namespace std;


int main() {
    int numbers[5];
    int total = 0;

    for (int i = 0; i < 5; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
        total += numbers[i]; // keep adding to total
    }

    // compute average
    double average = total / 5.0;

    cout << "Average value = " << average << endl;

    return 0;
}
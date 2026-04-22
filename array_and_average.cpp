#include <iostream>
using namespace std;


int main() {
    int numbers[5];
    int total = 0;

    // input loop
    for (int i = 0; i < 5; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
        total += numbers[i];
    }

    //average
    double average = total / 5.0;

    cout << "Average value = " << average << endl;

    return 0;
}
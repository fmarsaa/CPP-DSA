#include <iostream>
using namespace std;


int main() {
    int days;

    
    cout << "Enter number of days: ";
    cin >> days;

    // convert to seconds
    int seconds = days * 24 * 3600;

    
    cout << "Total seconds in " << days << " days is " << seconds << endl;

    return 0;
}

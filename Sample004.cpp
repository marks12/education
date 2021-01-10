#include <iostream>

using namespace std;

// what is biggest
int main() {
    double numA, numB;

    cout << "Enter first double:";
    cin >> numA;

    cout << "Enter second double:";
    cin >> numB;

    if (numA > numB) {
        cout << "First double biggest\n";
    }

    if (numA < numB) {
        cout << "Second double biggest\n";
    } else {
        cout << "Its same\n";
    }

    return 0;
}
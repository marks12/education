#include "iostream"

using namespace std;

int main() {

    int i, j;

    for (i = 0, j = 0; i * j < 20; i++, j++) {
        cout << "i: " << i << " j: " << j << "\n";
    }

    return 0;
}
#include "iostream"

using namespace std;

int main()
{
    unsigned char iter = 0;

    cout << "i: " << iter++ << "\n";

    while (iter) {
        cout << "i: " << iter << "\n";
        iter++;
    }

    return 0;
}
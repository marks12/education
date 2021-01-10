#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float x, y, z;

    x = 12.4;
    y = 22;

    z = sqrt((x * x) + (y * y));

    cout << "z = " << z << "\n";

    return 0;
}
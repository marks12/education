#include "iostream"
using namespace std;

void myFunc(); //function prototyping
int box(int w, int h, int l);

int main()
{
    cout << "Before myFunc call" << endl;

    myFunc();

    cout << "After myFunc call" << endl;

    return 0;
}

void myFunc()
{
    cout << "my func" << endl;

    cout << "call box size box(1,23,4): " << box(1,23,4) << endl;
    cout << "call box size box(5,11,3): " << box(5,11,3) << endl;

    return;
}

int box(int w, int h, int l)
{
    return w * h * l;
}
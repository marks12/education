#include<iostream>

using namespace std;

int main()
{
    char name[10];

    cout << "Please enter name: ";

    cin.getline(name, sizeof(name));

    cout << "Hello, " << name << "!" << endl;

    return 0;
}
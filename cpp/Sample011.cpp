#include <iostream>

using namespace std;

int main()
{
    int total;
    int *total_link = 0;

    if (total_link) {
        cout << "default total_link: " << *total_link << endl;
    } else {
        cout << "total_link is null \n";
    }

    total = 100;
    total_link = &total;

    if (total_link) {
        cout << "default total_link: " << *total_link << endl;
    } else {
        cout << "total_link is null \n";
    }

    cout << "total: " << total << endl;

    total++;
    cout << "total++: " << *total_link << endl;
    (*total_link)++;
    cout << "total_link++: " << *total_link << endl;
    cout << "total++: " << total << endl;
    (*total_link)--;
    cout << "total_link--: " << total << endl;

    //NOT CORRECT
    *total_link--;
    cout << "NOT CORRECT (--) total_link: " << total << endl;

    return 0;
}
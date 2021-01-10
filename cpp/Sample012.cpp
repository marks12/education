#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int i;
    char str[80] = "This is: = A test string В том числе на русском";
    char strChange[80] = "";
    char *p = 0;

    // First change
    cout << "Source string: " << str << endl;
    for (i=0; str[i]; i++) {
        if (isupper(str[i])) {
            strChange[i] = tolower(str[i]);
        } else {
            strChange[i] = toupper(str[i]);
        }
    }
    cout << "New string: " << strChange << endl;

    p = str;
    while (*p) {
        *p = towupper(*p);
        p++;
    }
    cout << "New string v2: " << str << endl;

    return 0;
}
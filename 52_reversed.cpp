#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    string reversed_str = string(str.rbegin(), str.rend());
    cout << "Reversed string: " << reversed_str << endl;
    return 0;
}

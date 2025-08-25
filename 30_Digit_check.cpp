#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n >= '0' && n <= '9')
        cout << " is a number\n";
    else
        cout << " is not a number\n";

    return 0;
}

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b, c, D;
    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;

    D = b*b - 4*a*c;

    if (D >= 0) {
        cout << "Root 1: " << (-b + sqrt(D)) / (2*a) << endl;
        cout << "Root 2: " << (-b - sqrt(D)) / (2*a) << endl;
    } else {
        cout << "Complex roots." << endl;
    }

    return 0;
}

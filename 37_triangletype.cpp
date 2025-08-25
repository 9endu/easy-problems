#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    cout << "Enter three sides of triangle: ";
    cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c)
            cout << "Equilateral Triangle" << endl;
        else if (a == b || b == c || a == c)
            cout << "Isosceles Triangle" << endl;
        else
            cout << "Scalene Triangle" << endl;
    } else {
        cout << "Not a valid triangle!" << endl;
    }

    return 0;
}

#include <iostream>
#include <cmath>  
using namespace std;

int main() {
    double base, exponent;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exponent;

    double result = pow(base, exponent);  // base^exponent
    cout << result << endl;

    return 0;
}

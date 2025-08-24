#include <iostream>
using namespace std;

int main() {
    double base;
    int exponent;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exponent;
    int res=1;
    for(int i=1;i<exponent+1;i++){
        res=base*res;
    }
    cout << "The result is "<< res;
    return 0;
}

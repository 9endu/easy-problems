#include <iostream>
using namespace std;

int main() {
    cout << "Enter what type of pyramid you want - right angle or pyramid: ";
    string type;
    cin >> type;

    int rows = 5; 

    if (type == "right") {
        for (int i = 1; i <= rows; i++) {
            for (int j = 1; j <= i; j++) {
                cout << "*";
            }
            cout << endl;
        }
    } 
    else if (type == "pyramid") {
        for (int i = 1; i <= rows; i++) {
            for (int s = i; s < rows; s++) { 
                cout << " ";
            }
            for (int j = 1; j <= (2 * i - 1); j++) { 
                cout << "*";
            }
            cout << endl;
        }
    }
    else {
        cout << "Invalid type!";
    }

    return 0;
}

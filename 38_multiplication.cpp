#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter the number for the table ";
    cin >> num;
    for(int i=1;i<11;i++){
        cout << num*i << "\n";
    }
}
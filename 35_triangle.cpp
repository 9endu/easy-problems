#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cout << "Enter the three angles";
    cin >> a >> b >> c;
    if(a+b+c==180)
        cout << "It is a valid triangle";
    else
        cout << "It is not a valid triangle";
}
#include <iostream>
using namespace std;

int main() {
    string s; char ch; int c=0;
    cin >> s >> ch;
    for(char x : s) if(x==ch) c++;
    cout << c;
}

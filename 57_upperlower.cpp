#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s; cin >> s;
    for(char &c : s) c = toupper(c);  // To Uppercase
    cout << s << "\n";
    for(char &c : s) c = tolower(c);  // To Lowercase
    cout << s;
}

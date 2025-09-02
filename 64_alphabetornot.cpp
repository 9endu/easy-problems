#include<iostream>
#include<cctype>
using namespace std;
int main(){
    char ch;
    cout << "Enter a string";
    cin >> ch;
    if (isalpha(ch)){
        cout << "it is an alphabet";
    }
    else{
        cout << "It is not an alphabet";
    }

    return 0;
}
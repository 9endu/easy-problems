#include<iostream>
#include<string>
#include <cctype>

using namespace std;

int main(){
    string str;
    cout << "Enter a string";
    cin >> str;

    bool hasDigit=false;
    for(char ch:str){
        if(isdigit(ch)){
            hasDigit=true;
            break;
        }
    }

    if(hasDigit){
        cout << "String has a digit";
    }
    else{
        cout << "String doesn't havee a digit";
    }
}
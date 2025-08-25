#include <iostream>
using namespace std;
int main(){
    int num,temp,reversed=0,digit;
    cout << "Enter the number ";
    cin >> num;
    temp=num;
    while(num>0){
        digit=num%10;
        reversed=(reversed*10)+digit;
        num/=10;
    }
    if (temp == reversed)
        cout << temp << " is a palindrome\n";
    else
        cout << temp << " is not a palindrome\n";

    return 0;
}
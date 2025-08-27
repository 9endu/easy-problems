#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter a number";
    cin >> num;

    int a=0,b=1;

    while(a<=num){
        cout << a <<" ";
        int next =a+b;
        a=b;
        b=next;
    }
}
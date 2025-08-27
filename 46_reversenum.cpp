#include <iostream>
using namespace std;
int main(){
    int num,last;
    int final=0;
    cout << "Enter a number";
    cin >> num;
    while(num>0){
        last=num%10;
        final=(final*10)+last;
        num=num/10;
    }
    cout << "The reversed number is " << final;
}
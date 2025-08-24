#include <iostream>
using namespace std;
int main(){
    double principal,rate,time;
    cout << "Enter the principal rate and interest";
    cin >> principal >> rate >> time;
    double si=(principal*rate*time)*100;
    cout << "The simple interest is " << si << endl;
    return 0;
}
#include <iostream>
using namespace std;
int main(){
    int num,last;
    int sum=0;

    cout <<  "Enter a number";
    cin >> num;
    
    while(num>0){
        last=num%10;
        sum=sum+last;
        num=num/10;
    }
    cout << sum;
    return 0;
}
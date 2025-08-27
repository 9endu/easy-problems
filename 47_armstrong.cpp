#include <iostream>
using namespace std;
int main(){
    int num,last;
    int sum=0;
    cout << "Enter a number";
    cin >> num;
        int temp=num;

    while(num>0){
        last=num%10;
        sum=(last*last*last)+sum;
        num=num/10;
    }
    if (sum==temp){
       cout << "It is an armstrong number";
    }
    else{
       cout << "It is not an armstrong number";
    }
}
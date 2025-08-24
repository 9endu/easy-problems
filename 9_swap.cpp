#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout << "Enter the two number to swap";
    cin >> x >> y;
    cout << "Before Swap First number "<< x << " Second number " << y << endl;
    int temp=x;
    x=y;
    y=temp;
    cout << "After Swap First number "<< x << " Second number " << y << endl;
    return 0;
}
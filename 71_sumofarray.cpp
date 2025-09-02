#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of array elements";
    cin >> n;
    int sum=0;
    int arr[n];
    for(int i=0;i<n;i++){
        cout << "Enter the value for the "<<i+1<<" Element ";
        cin >> arr[i];
        sum=sum+arr[i];
    }
    cout << "The sum of elements are " <<sum;
}
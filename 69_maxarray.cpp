#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter number of elements";
    cin >> n;

    int arr[n];
    for(int i=0;i<n;i++){
        cout << "Enter the "<<i+1<<"element";
        cin >> arr[i];
    }

    int maxVal=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>maxVal)
        maxVal=arr[i];
    }

    cout << "Maximum element " << maxVal;
    return 0;
}
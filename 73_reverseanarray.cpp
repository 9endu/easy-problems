#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter number of elements";
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout << "Enter the value for element "<<i+1<<" ";
        cin >> arr[i];
    }
    for(int i=0, j=n-1;i<j ; i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }

    cout << "Reversed array ";
    for(int i=0;i<n;i++){
        cout << arr[i] <<" " ;
    }
    return 0;
}
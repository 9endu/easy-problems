#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the numbers";
    cin >> n ;
    int sum=0;
    for(int i=0;i<n+1;i++){
        sum=sum+i;
    }
   cout << sum << endl;
   return 0;
}

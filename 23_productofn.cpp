#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the numbers ";
    cin >> n ;
    int res=1;
    for(int i=1;i<n+1;i++){
        res=res*i;
    }
   cout << res << endl;
   return 0;
}

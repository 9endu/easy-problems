#include <iostream>
using namespace std;
int main(){
    int mark;
    cout << "Enter the marks to determine your grade ";
    cin >> mark;

    if (mark==100)
        cout <<"Congrats! You got O grade";
    else if (mark >= 90)
        cout << "Grade: A\n";
    else if (mark >= 75)
        cout << "Grade: B\n";
    else if (mark >= 60)
        cout << "Grade: C\n";
    else if (mark >= 40)
        cout << "Grade: D\n";
    else
        cout << "Grade: F (Fail)\n";

    return 0;

}
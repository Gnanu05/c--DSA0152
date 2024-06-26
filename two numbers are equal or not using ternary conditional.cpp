#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    
    bool equal = (num1 == num2) ? true : false;
    
    if (equal) {
        cout << "The numbers " << num1 << " and " << num2 << " are equal." << endl;
    } else {
        cout << "The numbers " << num1 << " and " << num2 << " are not equal." << endl;
    }
    
    return 0;
}

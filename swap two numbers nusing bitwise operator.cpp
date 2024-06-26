#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    if (a != b) { 
        a ^= b;
        b ^= a;
        a ^= b;
    }
}

int main() {
    int num1, num2;
    
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    
    cout << "Before swapping: ";
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;
    
    swap(num1, num2);
    
    cout << "After swapping: ";
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;
    
    return 0;
}

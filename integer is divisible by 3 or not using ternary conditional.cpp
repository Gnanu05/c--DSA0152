#include <iostream>
using namespace std;

int main() {
    int num;
    
    cout << "Enter an integer: ";
    cin >> num;
    
    bool divisibleBy3 = (num % 3 == 0) ? true : false;
    
    if (divisibleBy3) {
        cout << num << " is divisible by 3." << endl;
    } else {
        cout << num << " is not divisible by 3." << endl;
    }
    
    return 0;
}

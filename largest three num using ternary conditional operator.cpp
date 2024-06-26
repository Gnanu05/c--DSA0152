#include <iostream>
using namespace std;

int findLargest(int a, int b, int c) {
    int largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    return largest;
}

int main() {
    int num1, num2, num3;
    
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    
    int largest = findLargest(num1, num2, num3);
    
    cout << "The largest number is: " << largest << endl;
    
    return 0;
}

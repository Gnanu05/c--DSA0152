#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of terms in Fibonacci series: ";
    cin >> n;
    int a = 0, b = 1;
    cout << "Fibonacci Series up to " << n << " terms:" << endl;
    cout << a << " " << b << " ";
    for (int i = 3; i <= n; ++i) {
        int next = a + b;
        cout << next << " ";
        a = b;
        b = next;
    }

    cout << endl;

    return 0;
}

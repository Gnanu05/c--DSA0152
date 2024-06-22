#include <iostream>

using namespace std;

void printMessage(string message = "Hello, World!", int times = 1) {
    for (int i = 0; i < times; i++) {
        cout << message << endl;
    }
}

int main() {
    int choice;
    string message;
    int times;

    cout << "Do you want to use default arguments? (1 = Yes, 2 = No): ";
    cin >> choice;

    if (choice == 1) {
        printMessage(); 
    } else if (choice == 2) {
        cout << "Enter a message: ";
        getline(cin, message);
        cout << "Enter the number of times to print the message: ";
        cin >> times;
        printMessage(message, times); 
    } else {
        cout << "Invalid choice. Exiting..." << endl;
        return 1;
    }

    return 0;
}

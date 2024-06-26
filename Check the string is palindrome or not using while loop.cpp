#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    bool isPalindrome = true;
    cout << "Enter a string: ";
    getline(cin, str);
    string formattedStr = "";
    for (char c : str) {
        if (!isspace(c)) {
            formattedStr += c;
        }
    }
    int left = 0;
    int right = formattedStr.length() - 1;
    while (left < right) {
        if (formattedStr[left] != formattedStr[right]) {
            isPalindrome = false;
            break;
        }
        ++left;
        --right;
    }

    if (isPalindrome) {
        cout << "The string \"" << str << "\" is a palindrome." << endl;
    } else {
        cout << "The string \"" << str << "\" is not a palindrome." << endl;
    }

    return 0;
}

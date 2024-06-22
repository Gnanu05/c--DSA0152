#include <iostream>

using namespace std;

bool isEligibleToVote(int age) {
    return age >= 18;
}

int yearsUntilEligible(int age) {
    return 18 - age;
}

int main() {
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (isEligibleToVote(age)) {
        cout << "You are eligible to vote." << endl;
    } else {
        int yearsLeft = yearsUntilEligible(age);
        cout << "You are not eligible to vote. You need to wait " << yearsLeft << " years." << endl;
    }

    return 0;
}

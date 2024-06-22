#include <iostream>

class Reverse {
private:
    int num;
    int reverse;

public:
    Reverse() {
        std::cout << "Enter a number: ";
        std::cin >> num;
        calculateReverse();
    }

    Reverse(int n) : num(n) {
        calculateReverse();
    }

    void calculateReverse() {
        int temp = num;
        reverse = 0;
        while (temp!= 0) {
            int digit = temp % 10;
            reverse = reverse * 10 + digit;
            temp /= 10;
        }
        std::cout << "Reverse of " << num << " is " << reverse << std::endl;
    }
};

int main() {
    
    Reverse r1;

    
    Reverse r2(12345);

    return 0;
}

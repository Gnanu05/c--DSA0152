#include <iostream>

bool isPrime(int num) {
    if (num <= 1) {
        return false; 
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false; 
        }
    }

    return true;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if (isPrime(num)) {
        std::cout << "The number " << num << " is prime." << std::endl;
    } else {
        std::cout << "The number " << num << " is not prime." << std::endl;
    }

    return 0;
}

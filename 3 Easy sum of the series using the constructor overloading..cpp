#include <iostream>

class Series {
private:
    int n;
    double sum;

public:
    Series() {
        std::cout << "Enter a number: ";
        std::cin >> n;
        calculateSum();
    }

    Series(int num) : n(num) {
        calculateSum();
    }

    void calculateSum() {
        sum = 0.0;
        for (int i = 1; i <= n; i++) {
            sum += i;
        }
        std::cout << "Sum of the series 1 + 2 + 3 +... + " << n << " is " << sum << std::endl;
    }
};

int main() {
    
    Series s1;

    
    Series s2(10);

    return 0;
}

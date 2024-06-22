#include <iostream>

class Cube {
private:
    int num;

public:
    Cube(int n) : num(n) {}

    ~Cube() {
        for (int i = 1; i <= num; i++) {
            std::cout << "Cube of " << i << " is " << i * i * i << std::endl;
        }
    }
};

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    Cube c(n);

    return 0;
}

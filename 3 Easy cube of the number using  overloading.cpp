#include <iostream>

class Cube {
private:
    int num;

public:
    Cube() {
        std::cout << "Enter a number: ";
        std::cin >> num;
        displayCube();
    }

    Cube(int n) : num(n) {
        displayCube();
    }

    void displayCube() {
        for (int i = 1; i <= num; i++) {
            std::cout << "Cube of " << i << " is " << i * i * i << std::endl;
        }
    }
};

int main() {
    
    Cube c1;
    Cube c2(5);

    return 0;
}

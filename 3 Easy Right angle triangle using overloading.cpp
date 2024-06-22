#include <iostream>

class Triangle {
private:
    int n;

public:
    Triangle() {
        std::cout << "Enter a number: ";
        std::cin >> n;
        printTriangle();
    }

    Triangle(int num) : n(num) {
        printTriangle();
    }

    void printTriangle() {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                std::cout << i << " ";
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    
     Triangle t1;


    Triangle t2(5);

    return 0;
}

#include <iostream>

class MyClass {
private:
    int x;

public:
    MyClass(int val) : x(val) {}

    void display() {
        std::cout << "Value of x: " << this->x << std::endl;
    }

    void increment() {
        this->x = this->x + 1;
    }

    int getValue() {
        return this->x;
    }
};

int main() {
    int val;
    std::cout << "Enter a value for x: ";
    std::cin >> val;

    MyClass obj(val); // create an object with x = val

    std::cout << "Initial value of x: " << obj.getValue() << std::endl;

    obj.display(); 

    obj.increment(); 

    std::cout << "Value of x after increment: " << obj.getValue() << std::endl;

    return 0;
}

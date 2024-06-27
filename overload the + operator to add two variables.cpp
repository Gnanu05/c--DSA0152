#include <iostream>

class Adder {
private:
    int value;

public:
    Adder(int v = 0) : value(v) {}

    Adder operator+(const Adder& other) const {
        return Adder(this->value + other.value);
    }

    void display() const {
        std::cout << "Value: " << value << std::endl;
    }
};

int main() {
    Adder a1(10);
    Adder a2(20);

    std::cout << "Initial values: " << std::endl;
    a1.display();
    a2.display();

    Adder a3 = a1 + a2; 

    std::cout << "After addition: " << std::endl;
    a3.display();

    return 0;
}

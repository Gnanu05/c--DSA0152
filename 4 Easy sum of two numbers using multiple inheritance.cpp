#include <iostream>

class Number {
protected:
    int num;

public:
    Number(int n) : num(n) {}

    virtual void display() {
        std::cout << "Number: " << num << std::endl;
    }
};

class Adder : public Number {
public:
    Adder(int n) : Number(n) {}

    void add(Number& n) {
        num += n.num;
    }

    void display() override {
        std::cout << "Sum: " << num << std::endl;
    }
};

int main() {
    int num1, num2;
    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;

    Adder a1(num1);
    Adder a2(num2);

    a1.add(a2);
    a1.display();

    return 0;
}

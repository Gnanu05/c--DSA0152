#include <iostream>

class Complex {
private:
    int real;
    int imag;

public:
    Complex(int r, int i) : real(r), imag(i) {}

    void display() {
        std::cout << "The real part is " << real << std::endl;
        std::cout << "The imaginary part is " << imag << std::endl;
    }
};

int main() {
    int real, imag;
    std::cout << "Enter the real part: ";
    std::cin >> real;
    std::cout << "Enter the imaginary part: ";
    std::cin >> imag;

    Complex c(real, imag);
    Complex* ptr = &c;

    std::cout << real << "," << imag << std::endl;
    ptr->display();

    return 0;
}

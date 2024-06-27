#include <iostream>
#include <stdexcept>

class Array {
private:
    int* arr;
    int size;

public:
    // Constructor
    Array(int s) : size(s) {
        arr = new int[s];
    }

    // Destructor
    ~Array() {
        delete[] arr;
    }

    int& operator[](int index) {
        if (index < 0 || index >= size) {
            throw std::out_of_range("Index out of range");
        }
        return arr[index];
    }

    const int& operator[](int index) const {
        if (index < 0 || index >= size) {
            throw std::out_of_range("Index out of range");
        }
        return arr[index];
    }

    void display() const {
        for (int i = 0; i < size; ++i) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    Array myArray(5);
    for (int i = 0; i < 5; ++i) {
        myArray[i] = i * 10;
    }

    std::cout << "Array elements: ";
    myArray.display();

    std::cout << "Element at index 2: " << myArray[2] << std::endl;

    try {
        std::cout << "Element at index 10: " << myArray[10] << std::endl;
    } catch (const std::out_of_range& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}

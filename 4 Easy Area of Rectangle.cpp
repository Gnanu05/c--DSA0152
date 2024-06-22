#include <iostream>

class Rectangle {
private:
    int length;
    int width;

public:
    Rectangle(int l, int w) : length(l), width(w) {}

    int area() {
        return length * width;
    }

    void display() {
        std::cout << "Length: " << length << ", Width: " << width << std::endl;
        std::cout << "Area: " << area() << std::endl;
    }
};

int main() {
    int numRectangles;
    std::cout << "Enter the number of rectangles: ";
    std::cin >> numRectangles;

    Rectangle rectangles[numRectangles];

    for (int i = 0; i < numRectangles; i++) {
        int length, width;
        std::cout << "Enter length and width of rectangle " << i + 1 << ": ";
        std::cin >> length >> width;
        rectangles[i] = Rectangle(length, width);
    }

    std::cout << "Rectangle Details:" << std::endl;
    for (int i = 0; i < numRectangles; i++) {
        std::cout << "Rectangle " << i + 1 << ":" << std::endl;
        rectangles[i].display();
        std::cout << std::endl;
    }

    return 0;
}

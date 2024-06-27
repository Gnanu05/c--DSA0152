#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int age;
    std::string major;

public:
    Student(const std::string& n, int a, const std::string& m) : name(n), age(a), major(m) {
        std::cout << "Student \"" << name << "\" created, Age: " << age << ", Major: " << major << std::endl;
    }

    ~Student() {
        std::cout << "Student \"" << name << "\" is being destroyed." << std::endl;
    }

    void display() const {
        std::cout << "Name: " << name << "\nAge: " << age << "\nMajor: " << major << std::endl;
    }
};

int main() {
    Student student1("Alice", 20, "Computer Science");

    student1.display();

    return 0;
}

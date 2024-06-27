#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;

public:
    
    Person(const std::string& n, int a) : name(n), age(a) {}

    friend std::ostream& operator<<(std::ostream& os, const Person& person);
};

std::ostream& operator<<(std::ostream& os, const Person& person) {
    os << "Name: " << person.name << ", Age: " << person.age;
    return os;
}

int main() {
    Person person("John Doe", 30);

    std::cout << person << std::endl;

    return 0;
}

#include <iostream>
#include <string>

class Book {
private:
    std::string title;
    std::string author;
    int pages;

public:
    
    Book(const std::string& t, const std::string& a, int p) : title(t), author(a), pages(p) {
        std::cout << "Book \"" << title << "\" by " << author << " created with " << pages << " pages." << std::endl;
    }

    
    ~Book() {
        std::cout << "Book \"" << title << "\" by " << author << " is being destroyed." << std::endl;
    }

    
    void display() const {
        std::cout << "Title: " << title << "\nAuthor: " << author << "\nPages: " << pages << std::endl;
    }
};

int main() {
    
    Book myBook("1984", "George Orwell", 328);

    myBook.display();

    return 0;
}

#include <iostream>
#include <string>
#include <cctype>

class StringConverter {
public:
    std::string convertToUppercase(const std::string& str) {
        std::string uppercaseStr;
        for (char c : str) {
            uppercaseStr += std::toupper(c);
        }
        return uppercaseStr;
    }

    std::string convertToLowercase(const std::string& str) {
        std::string lowercaseStr;
        for (char c : str) {
            lowercaseStr += std::tolower(c);
        }
        return lowercaseStr;
    }

    int countCapitalLetters(const std::string& str) {
        int count = 0;
        for (char c : str) {
            if (std::isupper(c)) {
                count++;
            }
        }
        return count;
    }
};

int main() {
    StringConverter converter;
    std::string inputStr;
    std::cout << "Enter a string: ";
    std::getline(std::cin, inputStr);

    std::string uppercaseStr = converter.convertToUppercase(inputStr);
    std::string lowercaseStr = converter.convertToLowercase(inputStr);
    int capitalCount = converter.countCapitalLetters(inputStr);

    std::cout << "Original String: " << inputStr << std::endl;
    std::cout << "String in UPPERCASE: " << uppercaseStr << std::endl;
    std::cout << "String in lowercase: " << lowercaseStr << std::endl;
    std::cout << "Number of capital letters: " << capitalCount << std::endl;

    return 0;
}

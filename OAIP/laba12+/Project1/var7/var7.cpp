#include <iostream>
#include <string>

std::string addExclamationAfterA(const std::string& input) {
    std::string result;
    result.reserve(input.size() * 2);

    for (char c : input) {
        result += c;
        if (c == 'a' || c == 'A') {
            result += '!';
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Введите строку: ";
    std::getline(std::cin, input);

    std::string transformed = addExclamationAfterA(input);
    std::cout << "Результат: " << transformed << std::endl;

    return 0;
}
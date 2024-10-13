#include <iostream>
#include <string>

std::string* excludeGroups(std::string* strPtr) {
    std::string& str = *strPtr;

    int length = str.length();

    int bracketCount = 0;
    int startPos = -1;

    for (int i = 0; i < length; i++) {
        if (str[i] == '[' || str[i] == '{' || str[i] == '(') {
            if (bracketCount == 0) {
                startPos = i;
            }
            bracketCount++;
        }
        else if (str[i] == ']' || str[i] == '}' || str[i] == ')') {
            if (bracketCount > 0) {
                bracketCount--;
                if (bracketCount == 0) {
                    str.erase(startPos, i - startPos + 1);
                    length = str.length();
                    i = startPos - 1;
                }
            }
        }
    }

    return strPtr;
}

int main() {
    std::cout << "Введите строку: ";
    std::string str;
    std::getline(std::cin, str);

    std::string* resultPtr = excludeGroups(&str); 

    std::cout << "Результат: " << *resultPtr << std::endl;

    return 0;
}
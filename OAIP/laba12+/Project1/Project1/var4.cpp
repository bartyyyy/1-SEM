#include <iostream>

void removeCharacter(const char input[], char character, char output[]) {
    size_t inputLength = 0;
    while (input[inputLength] != '\0') {
        ++inputLength;
    }

    size_t destIndex = 0;

    for (size_t srcIndex = 0; srcIndex < inputLength; ++srcIndex) {
        if (input[srcIndex] != character) {
            output[destIndex] = input[srcIndex];
            ++destIndex;
        }
    }

    output[destIndex] = '\0';
}

int main() {
    const int maxLength = 100;
    char input[maxLength];

    std::cout << "Vvedite stroky: ";
    std::cin.getline(input, maxLength);

    char character;
    std::cout << "Vvedite simvol: ";
    std::cin >> character;

    char output[maxLength];
    removeCharacter(input, character, output);

    std::cout << "Resultat: " << output << std::endl;

    return 0;
}
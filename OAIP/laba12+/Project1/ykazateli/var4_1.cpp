#include <iostream>

void removeCharacter(const char* input, char character, char* output) {
    const char* inputPtr = input;
    char* outputPtr = output;

    while (*inputPtr != '\0') {
        if (*inputPtr != character) {
            *outputPtr = *inputPtr;
            ++outputPtr;
        }
        ++inputPtr;
    }
    *outputPtr = '\0';
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
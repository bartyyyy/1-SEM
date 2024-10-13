#include <iostream>
#include <cwchar>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    setlocale(LC_CTYPE, "Russian");
    char choice;
    do {
        cout << "Select use case:\n";
        cout << "1 - determining the difference between code ​​in Windows-1251 letters of the Latin alphabet\n";
        cout << "2 - determining the difference between code ​​in Windows-1251 letters of the Russian alphabet\n";
        cout << "3 - output to the console the character code corresponding to the entered digit\n";
        cout << "4 - exit\n";
        cout << "5 - difference between Latin and Russian alphabet\n";
        cout << "Your choice: ";
        cin >> choice;

        switch (choice) {
        case '1': {
            char x;
            cout << "Enter letter X: ";
            cin >> x;
            int uppercaseCode = toupper(x); // Прописная буква X
            int lowercaseCode = tolower(x); // Строчная буква x

            int diff = lowercaseCode - uppercaseCode;
            cout << "Difference between code ​​in Windows-1251 for a letter " << x << ": " << diff << endl;
            break;
        }
        case '2': {
            char y;
            cout << "Enter letter Y: ";
            cin >> y;
            int uppercaseCode = static_cast<int>(y); // Прописная буква Y
            int lowercaseCode = static_cast<int>(tolower(y)); // Строчная буква y

            int diff = lowercaseCode - uppercaseCode;
            cout << "Difference between code ​​in Windows-1251 for a letter " << y << ": " << diff << endl;
            break;
        }
        case '3': {
            int z;
            cout << "Enter number Z: ";
            cin >> z;
            int digitCode = '0' + z; //  символ '0' используется для получения кода символа цифры в кодировке Windows-1251. 

            cout << "Code of the character corresponding to the number " << z << " in Windows-1251: " << digitCode << endl;
            break;
        }
        case '4':
            cout << "Programm end.\n";
            break;
        case '5': {
            wchar_t letter;
            cout << "Write Russian letter: ";
            wcin >> letter;
            char letterEN;
            cout << "Write Latin letter: ";
            cin >> letterEN;
            int code = static_cast<int>(letter) - static_cast<int>(letterEN);
            cout << "Diifference between Latin and Russian letter " << code;
            break;
        }
        default:
            cout << "Wrong choice. Please select the correct option.\n";
        }

        cout << endl;
    } while (choice != '4');

    return 0;
}
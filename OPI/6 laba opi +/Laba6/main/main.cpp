#include <iostream>
#include "lat.h"
#include "kir.h"
#include "num.h"


using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    char choice;
    do {
        cout << "Select use case:\n";
        cout << "1 - determining the difference between code values ​​in Windows-1251 letters of the Latin alphabet\n";
        cout << "2 - determining the difference in code values ​​in Windows-1251 letters of the Russian alphabet\n";
        cout << "3 - output to the console the character code corresponding to the entered digit\n";
        cout << "4 - exit\n";
        cout << "Your choice: ";
        cin >> choice;

        switch (choice) {
        case '1':
            lat();
            break;

        case '2':
            kir();
            break;

        case '3':
            num();
            break;

        case '4':
            cout << "The program is completed.\n";
            break;
        default:
            cout << "Wrong choice. Please select the correct option.\n";
        }

        cout << endl;
    } while (choice != '4');

    return 0;
}
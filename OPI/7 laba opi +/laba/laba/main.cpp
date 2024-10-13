
#include "getDiffLatin.h"
#include "getDiffCyrillic.h"
#include "getCode.h"
#include <iostream>
#include <stdio.h>
#include <Windows.h>

using namespace std;



int main()
{
    setlocale(LC_ALL, "RU");
    int mode, task;

    cout << "Enter job number "; cin >> task;

    if (task == 1) {
    
        cout << "Enter the program operating mode: "; cin >> mode;


        if (mode == 1) {

            getDiffLatin();

        }

        else if (mode == 2)  {

            getDiffCyrillic();

        }

        else if (mode == 3) {

            getCode();

        }
        else if (mode == 4) {

            cout << "program completed";

        }

        else {
        
            cout << "You have entered the wrong program mode "; std::cin >> mode;

        }

    }

}


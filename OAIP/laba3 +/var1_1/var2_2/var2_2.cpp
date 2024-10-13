#include <iostream>

int main()
{
    setlocale(LC_ALL, "rus");
    using namespace std;
    int m, chast1, chast2, k = 5, c;
    cout << "Write m = ";
    cin >> m;
    if (m % 2 != 0)
    {
        c = m - 5;
        chast1 = c / 2 + 5;
        chast2 = c / 2;
        k = chast1 - chast2;
        cout << "Chislo = " << m << endl;
        cout << "First = " << chast1 << endl;
        cout << "Second = " << chast2 << endl;
    }
    else cout << "chislo chetnoe" << endl;
}
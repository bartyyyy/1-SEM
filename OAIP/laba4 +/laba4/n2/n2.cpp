#include <iostream>

int main()
{
    setlocale(LC_CTYPE, "Russian");
    using namespace std;

    int m;
    cout << "Write number of month: ";
    cin >> m;

    if (m == 1 || m == 2 || m == 12)
    {
        cout << "Winter";
    }
    else if (m >= 3 && m <= 5)
    {
        cout << "Spring";
    }
    else if (m >= 6 && m <= 8)
    {
        cout << "Summer";
    }
    else if (m >= 9 && m <= 11)
    {
        cout << "Autumn";
    }
    else
    {
        cout << "Neverniy nomer mesyaca";
    }

    return 0;
}


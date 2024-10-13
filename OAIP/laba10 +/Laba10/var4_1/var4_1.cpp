#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Russian");
    int A, p, n, razn;
    char s[33];
    cout << "Write number" << endl;
    cin >> A;
    _itoa_s(A, s, 2);
    cout << s << endl;
    cout << "Enter starting position" << endl;
    cin >> p;
    cout << "Enter number of bits" << endl;
    cin >> n;
    razn = p - n;
    while (p >= razn)
    {
        A |= 1 << p;
        _itoa_s(A, s, 2);
        p--;
    }
    cout << s << endl;
    return 0;
}
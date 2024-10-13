#include <iostream>
using namespace std;

int main() {
    int A, B, C;

    cout << "Vvedite 3 celih chisla: ";
    cin >> A >> B >> C;

    if ((A % 2 == 0 && B % 2 == 0) || (B % 2 == 0 && C % 2 == 0) || (A % 2 == 0 && C % 2 == 0)) {
        cout << "Est 2 zadannih chisla" << endl;
    }
    else {
        cout << "Net 2 zadannih chisel" << endl;
    }

    return 0;
}
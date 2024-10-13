#include <iostream>
#include <string>
using namespace std;
int main() {
    string c;
    cin >> c;
    for (int i = c.length() - 1; i >= 0; i--) {
        cout << c[i];
    }
}
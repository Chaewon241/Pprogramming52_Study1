#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int h = 0;
    int m = b + c;

    if (m >= 60) {
        a += m / 60;
        m %= 60;
    }

    if (a >= 24) {
        a -= 24;
    }

    cout << a << " " << m;
}

#include <iostream>

using namespace std;

bool minute(int m) {
    if (m < 45) {
        return false;
    }
    else {
        return true;
    }
}

int main() {
    int a, b;
    cin >> a >> b;

    if (a >= 0 && minute(b) == true) {
        b -= 45;
    }
    else if (a >= 0 && minute(b) == false) {
        a -= 1;
        b += 15;
    }

    if (a < 0) {
        a = 23;
    }

    cout << a << " " << b;
}

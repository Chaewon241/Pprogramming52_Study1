#include <iostream>

using namespace std;

int dice(int a, int b, int c) {
    int n = 0;
    if (a == b) { n = a; }
    else if (a == c) { n = a; }
    else if (c == b) { n = b; }

    return n;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int answer = 0;
    int d = dice(a, b, c);
    if (d != 0) {
        if (a == b && a == c && c == b) {
            answer += 10000 + a * 1000;
        }
        else {
            answer += 1000 + d * 100;
        }
    }
    else {
        answer += max(max(a, b), c) * 100;

    }

    cout << answer;
}

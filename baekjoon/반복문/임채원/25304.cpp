#include <iostream>

using namespace std;

int main() {
    int total, num;
    cin >> total >> num;

    int cur_price = 0;
    for (int i = 0; i < num; i++) {
        int price, n;
        cin >> price >> n;
        cur_price += price * n;
    }
    if (total == cur_price) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
}

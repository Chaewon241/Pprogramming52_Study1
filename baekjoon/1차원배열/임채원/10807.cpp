#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[201] = { 0 };

    int num;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        arr[num + 100]++;
    }

    int a;
    cin >> a;

    cout << arr[a + 100];
}

#include <iostream>

using namespace std;

int main()
{
    int n1, n2;
    cin >> n1 >> n2;

    int arr[101] = { 0 };
    for (int i = 0; i < n2; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        for (int j = a; j <= b; j++)
        {
            arr[j] = c;
        }
    }

    for (int i = 0; i < n1; i++)
    {
        cout << arr[i+1] << " ";
    }
}
#include <iostream>

using namespace std;

int main()
{
    int arr[31] = { 0 };
    for (int i = 0; i < 28; i++)
    {
        int n;
        cin >> n;
        arr[n]++;
    }

    int minarr[30] = { 0 };

    int a = 0;
    for (int i = 1; i < 31; i++)
    {
        if (arr[i] != 1)
        {
            minarr[a++] = i;
            if (a == 2)
                break;
        }
    }

    cout << minarr[0] << endl << minarr[1];
}
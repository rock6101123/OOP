#include <bits/stdc++.h>
using namespace std;

int arr[100000];
int main()
{

    int a, b, c;

    while (cin >> a)
    {
        int i = 0;
        for (int j = 1; j <= a; j++)
        {
            if (a % j == 0)
            {
                arr[i] = j;
                i++;
            }
        }
        for (int j = 0; j < i - 1; j++)
            cout << arr[j] << " ";
        cout << arr[i-1] << "\n";
    }
}

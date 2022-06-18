#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a, b, c;

    while (cin >> a)
    {
        int sum = 0;
        for (int j = 1; j <= a; j++)
        {
            if (j % 2 == 0 && j % 3 == 0 && j % 12 != 0)
                sum += j;
        }
        cout << sum << "\n";
    }
}

#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a, b, c;

    while (cin >> a)
    {
        int time = 0;
        for (int j = 1; j * j <= a; j++)
        {
            if (a % j == 0)
                time++;
        }
        if (a > 1 && time == 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}

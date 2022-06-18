#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a, b, c;

    while (cin >> a)
    {
        for (int i = a - 1; i > 1; i--)
        {
            int time = 0;
            for (int j = 1; j * j <= i; j++)
            {
                if (i % j == 0)
                    time++;
            }
            if (time == 1)
            {
                cout << i <<"\n";
                break;
            }
        }
    }
}

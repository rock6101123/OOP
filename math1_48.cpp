#include <bits/stdc++.h>
using namespace std;

int F91(int n)
{

    if (n <= 100)
        return F91(F91(n + 11));
    else if (n > 100)
        return n - 10;
}

int main()
{

    int a, b, c;

    cin >> a;

    for (int i = 0; i < a; i++)
    {
        cin >> b;
        cout << F91(b) << "\n";
    }
}

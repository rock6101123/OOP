#include <bits/stdc++.h>
using namespace std;
int arr[100000];
int main()
{

    int a, b, c;

    while (cin >> a >> b)
    {
        if (a == 0 && b != 0)
            cout << "y-axis\n";
        else if (a != 0 && b == 0)
            cout << "x-axis\n";
        else if (a == 0 && b == 0)
            cout << "Origin\n";
        else if (a > 0 && b > 0)
            cout << "1st Quadrant\n";
        else if (a > 0 && b < 0)
            cout << "4th Quadrant\n";
        else if (a < 0 && b > 0)
           cout << "2nd Quadrant\n";
        else if (a < 0 && b < 0)
            cout << "3rd Quadrant\n";
    }
}

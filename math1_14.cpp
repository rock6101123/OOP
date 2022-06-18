#include <bits/stdc++.h>
using namespace std;
int main()
{

  long long int a, b, c;

  while (cin >> a)
  {

    cout << a/86400 << " days\n";
    a %= 86400;
    cout << a/3600 << " hours\n";
    a %= 3600;
    cout << a/60 << " minutes\n";
    a %= 60;
    cout << a << " seconds\n";
  }
}

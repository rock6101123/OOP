#include <bits/stdc++.h>
using namespace std;

int main()
{

  int a, b, c;

  while (cin >> a >> b)
  {

    if (a <= 100 && a >= 0 && b >= 0 && b <= 100)
      cout << "inside\n";
    else
      cout << "outside\n";
  }
}

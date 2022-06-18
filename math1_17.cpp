#include <bits/stdc++.h>
using namespace std;
int GCD(int a, int b)
{
  return b == 0 ? a : GCD(b, a % b);
}
int main()
{

  int a, b, c;

  while (cin >> a >> b)
  {

    cout << GCD(a, b) << "\n";
  }
}

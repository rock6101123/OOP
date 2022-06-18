#include <bits/stdc++.h>
using namespace std;
long long int fac(int a)
{
  if (a == 1 || a == 0)
    return 1;
  return a * fac(a - 1);
}

int main()
{

  int a, b, c;

  while (cin >> a)
  {

    cout << fac(a) << "\n" ;
  }
}

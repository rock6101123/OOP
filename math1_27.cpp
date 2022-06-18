#include <bits/stdc++.h>
using namespace std;
int main()
{

  int a, b, c;

  while (cin >> a >> b)
  {
    int tmp;
    if (a > b)
      tmp = a, a = b, b = tmp;
    cout << (b-a+1)*(b+a)/2<< "\n";
  }
}

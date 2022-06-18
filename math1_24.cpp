#include <bits/stdc++.h>
using namespace std;

int main()
{

  float a, b, c;

  while (cin >> a >> b)
  {

    if (a >= 0 && a <= 60)
      cout << fixed << setprecision(1) << a * b << "\n" ;
    else if (a > 60 && a <= 120)
    {
      int ans = (a - 60) * b * 1.33 * 100 + 60 * b * 100;
      if (ans % 10 >= 5)
        ans += 10;
      cout << fixed << setprecision(1) << (float)ans/100 << "\n" ;
    }
    else if (a > 120)
    {
      int ans = (a - 120) * b * 1.66 * 100 + 60 * b * 1.33 * 100 + 60 * b * 100;
      if (ans % 10 >= 5)
        ans += 10;
      cout << fixed << setprecision(1) << (float)ans/100 << "\n" ;
    }
  }
}

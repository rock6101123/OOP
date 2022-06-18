#include <bits/stdc++.h>
using namespace std;
int main()
{

  int a, b, c;

  while (cin >> a)
  {

    for (int i = 0; i <= a; i += 35)
      if (i % 35 == 0 && i + 35 < a && i != 0)
        cout << i << " ";
      else if (i % 35 == 0 && i + 35 >= a && i != 0)
        cout << i << "\n";
  }
}

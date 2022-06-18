#include <bits/stdc++.h>

using namespace std;
#define pi 3.14159

int main()
{

  int a, b, c;

  while (cin >> a >> b)
  {

    float pattern = 100 * 100 * pi;
    float ans = (a * a + b * b) * pi;
    if (ans <= pattern)
      cout << "inside\n";
    else
      cout << "outside\n";
  }
}

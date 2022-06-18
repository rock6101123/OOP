#include <bits/stdc++.h>

using namespace std;

int main()
{

  float a;

  while (cin >>a)
  {

    int area = a * a * 100;
    if (area % 10 >= 5)
      area += 10;
    cout << fixed << setprecision(1) << (float)area/100 << "\n";
  }
}

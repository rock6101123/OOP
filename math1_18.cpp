#include <bits/stdc++.h>
using namespace std;
int main()
{

  int a, b, c;

  while (cin >> a)
  {

    int arr[8] = {0};
    int i = 7;
    if (a >= 0)
    {
      while (a != 0)
      {
        arr[i] = a % 2;
        i--;
        a /= 2;
      }
      for (int j = 0; j < 8; j++)
        cout << arr[j];
      cout << "\n";
    }
    else if (a < 0)
    {
      a = a * -1 - 1;
      while (a != 0)
      {
        arr[i] = a % 2;
        i--;
        a /= 2;
      }
      for (int j = 0; j < 8; j++)
      {
        if (arr[j] == 0)
          cout << "1";
        else
          cout << "0";
      }
      cout << "\n";
    }
  }
}

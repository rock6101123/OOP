#include <bits/stdc++.h>
using namespace std;

long long int Pow(int a)
{
  long long int ans = 1;
  for (int i = 0; i < a; i++)
    ans *= 2;

  return ans;
}

int main()
{

  int a;

  while (cin >> a)
  {

    if (a <= 31)
    {
      cout << Pow(a) << "\n";
    }
    else
      printf("Value of more than 31\n");
  }
}

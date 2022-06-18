#include <bits/stdc++.h>


using namespace std;


int main()
{

  int a, b;

  while (cin >> a >> b) 
  {
    
    cout << a << "+" << b << "=" << a+b << "\n";
    cout << a << "*" << b << "=" << a*b << "\n";
    cout << a << "-" << b << "=" << a-b << "\n";
    if (a > 0 && b < 0)
      cout << a << "/" << b << "=" << a/b << "..." << a%b << "\n";
    else if ((a < 0 && b > 0))
      cout << a << "/" << b << "=" << a/b-1 << "..." << a%b+b << "\n";
    else if (a < 0 && b < 0)
      cout << a << "/" << b << "=" << a/b+1 << "..." << a%b-b << "\n";
    else
      cout << a << "/" << b << "=" << a/b << "..." << a%b << "\n";
  }
}

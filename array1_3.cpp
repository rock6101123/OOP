#include <bits/stdc++.h>

using namespace std;

int main()
{

  long long int arr[6];
  long long int sum = 0;

  for (int i = 0; i < 6; i++)
  {
    //scanf("%lld", &arr[i]);
    cin >> arr[i];
    sum += arr[i] * arr[i] * arr[i];
  }
  cout << sum << "\n";
  //printf("%lld\n", sum);
}

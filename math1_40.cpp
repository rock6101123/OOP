#include <bits/stdc++.h>

using namespace std;

int main(){

  int a;

  while(cin >> a){
    int num=0;
    for(int i=1;i<a;i++){
      num+=i;
      cout << i << " + ";
    }
    num+=a;
    cout << a << " = " << num << "\n";
  }
}

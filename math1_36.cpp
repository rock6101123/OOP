#include <bits/stdc++.h>
using namespace std;

int main(){

  int a;
  while(cin >>a){
    if(a>=3&&a<=5)
       cout << "Spring\n";
    else if(a>=6&&a<=8)
       cout << "Summer\n";
    else if(a>=9&&a<=11)
       cout << "Autumn\n";
    else if((a>=1&&a<=2)||a==12)
       cout << "Winter\n";
  }
}

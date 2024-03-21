#include <bits/stdc++.h>
using namespace std;

bool prime(int n) {
  if (n == 0 || n == 1) {
    return false;
  }
  for(int i = 2; i <= n/2; i++) {
    if(n % i == 0) {
      return false;
      break;
    }
  }
  return true;
}

int main()
{
    int n;
    bool flag = false;
    cin>>n;
    for(int i=2; i<=n/2; i++) {
        if(prime(i)) {
          if (prime(n-i)) {
            cout<<i<<" "<<n-i<< endl;
            flag = true;
          }
        }
    }
    if(!flag) cout<<-1<<endl;
}

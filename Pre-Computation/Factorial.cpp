#include <bits/stdc++.h>
using namespace std;

const int M = 1e9+7;
const int N = 1e5+10;
long long fact[N];
/*
# Given T test cases and in each test case a number N.
  Print factorial of N for each test case % M where M = 10^9+7.

 Constraints:
 1 <= T <= 10^5
 1 <= N <= 10^5

=>
*/

int main()
{
    fact[0]=fact[1]=1;
    for(int i=2;i<N;i++){
        fact[i]=i*fact[i-1];
    }
    int T;
    cin>>T;
    while(T--){
        int x;
        cin>>x;
        cout<<fact[x]<<endl;
    }
}

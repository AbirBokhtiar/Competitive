#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if(n<2){
        return false;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main()
{
    int t;
    cin>>t;

    for(int i=1;i<=t;i++)
    {
        int l,r;
        int cnt=0;
        cin>>l>>r;
        for(int j=l; j<=r; j++)
        {
            if(isPrime(j)) cnt++;
        }
        cout<<"Case "<<i<<": "<<"There are "<<cnt<<" numbers between "<<l<<" and "<<r<<"."<<endl;
    }
}

#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

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
    int T;
    cin>>T;
    while(T--){
        int s,e;
        cin>>s>>e;
        vector<int>v;
        if(s<e){
            for(int i=s;i<=e;i++){
                if(isPrime(i)){
                    v.push_back(i);
                }
            }
            for(int i=0;i<v.size()-1;i++){
                cout<<v[i]<<",";
            }
            cout<<v[v.size()-1];
        }
        else{
            for(int i=e;i<=s;i++){
                if(isPrime(i)){
                    v.push_back(i);
                }
            }
            for(int i=0;i<v.size()-1;i++){
                cout<<v[i]<<",";
            }
            cout<<v[v.size()-1];
        }
        cout<<endl;
    }
}

#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    int T;
    cin>>T;
    while(T--){
        string s;
        cin>>s;
        int half;
        int sz=s.size();
        if(sz%2==0){
            half=sz/2;
        }
        else{
            int x= sz/2;
            s.erase(s.begin()+x);
            half=s.size()/2;
        }
        string s1=s.substr(0,half);
        string s2=s.substr(half);
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        if(s1==s2){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}

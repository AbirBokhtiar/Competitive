#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int>a, pair<int,int>b)
{
    if(a>b) return true;   //increasing
    return false;
}

int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(cmp(v[i],v[j])){
                swap(v[i],v[j]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
}


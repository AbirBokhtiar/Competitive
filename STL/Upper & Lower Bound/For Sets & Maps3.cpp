/***For Maps keys are considered for upper and lower bound..*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    map<int,int> mp;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        mp.insert({x,y});  //{5 4}{4 5}{6 7}{8 7}
    }
    auto it = mp.lower_bound(5);
    cout<<it->first<<" "<<it->second<<endl;  //{5,4}
    auto it2 = mp.upper_bound(5);
    cout<<it2->first<<" "<<it2->second<<endl; //{6,7}
}

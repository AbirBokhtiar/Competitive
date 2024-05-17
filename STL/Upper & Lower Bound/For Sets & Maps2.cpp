/*(For Maps and Sets Upper/Lower bound returns iterator)*/

#include <bits/stdc++.h>
using namespace std;

/***Time limit exceed problem solution***/

int main()
{
    int n;
    cin>>n;
    set<int> s;
    for(int i=0;i<(int)(1e6);i++){
        s.insert(rand());
    }
    for(int i=0;i<(int)(1e5);i++){
        auto it= s.lower_bound(rand());    //O(logn)
        //cout<<(*it)<<endl;
    }
}

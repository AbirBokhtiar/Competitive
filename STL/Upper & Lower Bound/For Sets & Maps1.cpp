/*(For Maps and Sets Upper/Lower bound returns iterator)*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    set<int> s;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        s.insert(x);
    }
    auto it= lower_bound(s.begin(),s.end(),5);   //O(n)
    cout<<(*it)<<endl;
    auto it2= upper_bound(s.begin(),s.end(),5);  //O(n)
    cout<<(*it2)<<endl;
}

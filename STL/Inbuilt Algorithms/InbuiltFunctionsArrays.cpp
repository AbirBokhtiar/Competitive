/***For arrays***/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int v[n];
    for(int i=0;i<n;i++){
        cin>>v[i];    //8 5 4 6 3 2 9
    }
    auto mini= min_element(v+3, v+n);   //returns iterator
    cout<<"Minimum: "<<*mini<<endl;    //2
    auto maxi= max_element(v, v+n);     //returns iterator
    cout<<"Maximum: "<<*maxi<<endl;    //9
    int sum= accumulate(v, v+n, 0);
    cout<<"Sum: "<<sum<<endl;     //37
    int occur= count(v, v+n, 5);
    cout<<"Number of times occurred: "<<occur<<endl;  //1
    auto it= find(v, v+n, 9);
    if(it!=v+n){
        cout<<(*it)<<endl;    //9
    }
    else cout<<"Not found"<<endl;
    reverse(v+2, v+n);
    for(auto val: v){
        cout<<val<<" ";     //8 5 9 2 3 6 4
    }
    cout<<endl;
    string s= "abcdefgh";
    reverse(s.begin()+3, s.end());
    cout<<s<<endl;      //abchgfed
}

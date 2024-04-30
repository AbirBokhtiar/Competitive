/*
# Given N strings, print uinque strings in lexiographical order.
  N <=10^5
  S <=100000

=>
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
   set<string> s;
   int N;
   cin>>N;
   for(int i=0;i<N;i++){
    string str;
    cin>>str;
    s.insert(str);
   }
   for(auto value: s){
    cout<<value<<" ";
   }

}

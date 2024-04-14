#include <bits/stdc++.h>
using namespace std;

int main()
{
   unordered_map<int,pair<int,string>> mp={{1,{4,"a"}},{2,{5,"b"}},{3,{6,"c"}}};
   for(auto &value: mp){
    auto &pairs= value.second;
    cout<<value.first<<" "<<pairs.first<<" "<<pairs.second<<endl;
   }
}

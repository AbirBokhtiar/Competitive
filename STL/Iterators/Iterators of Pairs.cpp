#include <bits/stdc++.h>
using namespace std;

int main()
{
   vector<pair<int,int>>v={{2,3},{4,5},{6,7}};
   vector<pair<int,int>> :: iterator it;
   for(it=v.begin(); it!=v.end(); it++){
        cout<<(it->first)<<" "<<(it->second)<<endl;  //Or, (*it).first<<" "<<(*it).second;
   }


}


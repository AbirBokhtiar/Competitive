/*1.Ordered maps store value according sorted keys..
2.Unordered maps store value randomly

3.Value insert(logn) and access(logn) both operation takes O(nlogn) for n size map.

4.In Ordered maps operations depend on keys.For example if keys are strings
  time complexity becomes (O(string.size*(logn)))

code-
*/

#include <bits/stdc++.h>
using namespace std;

void print(map<int,string> &m){
    for(auto &mp: m){
    cout<<mp.first<<" "<<mp.second<<endl;
   }
}

int main()
{
   map<int,string> m;
   m[1]="abc";
   m[2]="def";
   m.insert({3,"ghi"});
   m[5]="jkl";
   m[4]="mno";
   m.erase(3);
   print(m);

}

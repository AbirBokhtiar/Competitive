#include <bits/stdc++.h>
using namespace std;

vector<int> parseInts(string str)
{
    stringstream ss(str);
    vector<int>vec;
    char ch;
    int temp;
    while(ss >> temp)
    {
        vec.push_back(temp);
        ss >> ch;
    }
    return vec;
}
int main()
{
    string s;
    cin>>s;
    vector<int> v = parseInts(s);
    for(int i=0;i<v.size(); i++)
    {
        cout<<v[i]<<endl;
    }
}

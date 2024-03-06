#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    int t;
    cin>>t;
    while(t--){
        int activity;
        string origin;
        cin>>activity>>origin;
        bool country =false;
        if(origin=="INDIAN"){
            country =true;
        }
        int laddu=0;
        string s;
        int Rank,severity;

        for(int i=0;i<activity;i++)
        {
            cin>>s;
            if(s=="CONTEST_WON")
            {
                cin>>Rank;
                laddu+=300;
                if(Rank<20){
                    laddu+=20-Rank;
                }
            }
            else if(s=="TOP_CONTRIBUTOR")
            {
                laddu+=300;
            }
            else if(s=="BUG_FOUND")
            {
                cin>>severity;
                laddu+=severity;
            }
            else if(s=="CONTEST_HOSTED")
            {
                laddu+=50;
            }
        }
        if(country){
            cout<<laddu/200<<endl;
        }
        else
            cout<<laddu/400<<endl;
    }
}

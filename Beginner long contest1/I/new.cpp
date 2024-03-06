#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    int T;
    cin>>T;
    while(T--){
        int G;
        cin>>G;
        while(G--){
            int I,N,Q;
            cin>>I>>N>>Q;
            int mini=N/2;
            int maxi= N-mini;
            if(I==1){
                if(Q==1)cout<<mini<<endl;
                else cout<<maxi<<endl;
            }
            else{
                if(Q==2)cout<<mini<<endl;
                else cout<<maxi<<endl;
            }

        }
    }
}

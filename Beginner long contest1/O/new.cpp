#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    int T;
    cin>>T;
    while(T--){
        double x1,y1,r1,x2,y2,r2;
        cin>>x1>>y1>>r1>>x2>>y2>>r2;
        double c1c2= hypot(x1-x2, y1-y2);
        int r;
        if(r1>r2){
            r=r1-r2;
        }
        else{
            r=r2-r1;
        }
        if(c1c2==r){cout<<"E"<<endl;}
        else if(c1c2<r){cout<<"I"<<endl;}
        else cout<<"O"<<endl;
    }
}

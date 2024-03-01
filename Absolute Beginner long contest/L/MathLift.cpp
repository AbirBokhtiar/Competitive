#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int sum;
    for(int j=1;j<=t;j++)
    {
        int top,myPos;
        cin>>myPos>>top;
        int gf=0;
        int topTomyPos= abs(top-myPos)*4;
        int myPosTogf= (abs(myPos-gf)*4)+8;
        sum=topTomyPos+myPosTogf+11;
        cout<<"Case "<<j<<": "<<sum<<endl;
    }
}

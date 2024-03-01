#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    const double pi= 2*acos(0.0);
    for(int i=1;i<=t;i++)
    {
        double r;
        cin>>r;
        double areaC,areaSq,result;
        areaC=pi*r*r;
        areaSq= (2*r)*(2*r);
        result=(areaSq-areaC);
        cout<<"Case "<<i<<": "<<fixed<<setprecision(2)<<result<<endl;
    }
}

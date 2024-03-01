#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N,C,F,T,CF,CT,FT,CFT;
    cin>>N>>C>>F>>T>>CF>>CT>>FT>>CFT;
    int sum=N-(C+F+T-CF-CT-FT+CFT);
    cout<<sum<<endl;
}

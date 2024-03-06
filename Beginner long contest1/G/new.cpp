#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    int T;
    cin>>T;
    long long N;
    while(T>0){
        cin>>N;
        int count=0;
        if(N<0)return -1;
        for(int i=5;N/i>=1;i*=5){
            count+=N/i;
        }
        cout<<count<<endl;
        T--;
    }
}

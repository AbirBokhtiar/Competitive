#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    int T;
    cin>>T;
    int N;
    for(int i=1;i<=T;i++){
        cin>>N;
        int revNum=0;
        while(N>0){
            int lastD= N%10;
            revNum=revNum*10+lastD;
            N/=10;
        }
        cout<<revNum<<endl;
    }
}

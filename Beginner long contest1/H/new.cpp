#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    #define BOOST ios_base: : syn_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        int arr[N];
        cin>>arr[0];
        int ct=0;
        for(int i=1;i<N;i++){
            cin>>arr[i];
            if(arr[i]>arr[i-1]){
                arr[i]=arr[i-1];
                ct++;
            }
        }
        cout<<N-ct<<endl;
    }
}

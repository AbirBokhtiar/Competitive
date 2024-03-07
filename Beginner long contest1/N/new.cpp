#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    int T;
    cin>>T;
    while(T--){
        int n,x,y;
        cin>>n>>x>>y;
        int arr[n+1];
        if(n>x && !(x%y==0)){
            for(int i=1;i<n;i++){
                arr[i]=i;
                if((arr[i]%x==0) && !(arr[i]%y==0)){
                    cout<<arr[i]<<" ";
                }
            }
            cout<<endl;
        }
    }
}

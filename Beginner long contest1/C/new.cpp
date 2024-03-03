#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A,B,C;
    int res;
    cin>>A;
    cin>>B;
    cin>>C;
    if(A>B){
        if(A>C){
            if(B>C){
                res=B;
            }
            else res=C;
        }
        else res=A;
    }
    else{
        if(B>A){
            if(B>C){
                if(C>A){
                    res=C;
                }
                else{
                    res=A;
                }
            }
            else{
                res=B;
            }
        }
    }
    cout<<res<<endl;
}

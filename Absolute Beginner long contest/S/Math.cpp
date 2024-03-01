#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int temp=0;
    int i=0;
    while(t--)
    {
        int n,a,b;
        cin>>n;
        if(temp==n && n!=0)i++;
        a=i;
        b=abs(n-a);
        if(a<=10 && b<=10)
        {
            cout<<a<<" "<<b<<endl;
        }
        else
        {
            a=10-a;
            b=n-a;
            cout<<a<<" "<<b<<endl;
        }
        temp=n;
    }
}

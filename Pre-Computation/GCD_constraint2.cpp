/*
# Given an array A of integers of size N. Q queries given where each query
  is represented by two integers L,R. Find GCD after excluding part from range L to R
  inclusive (1 Based indexing). After excluding part of the array, remaining array is non empty.

 Constraints 1:
 2 <= T,N <= 100
 1 <= Q <= N
 1 <= A[i] <= 10^5
 1 <= L,R <= N and L <= R

=>

**Constraints 2**  O[t*(n+n+n+q)] = O(t*n) = 10^6

*/

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
int arr[N];
int forwardd[N];
int backward[N];

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }
        forwardd[0]=backward[n+1]=0;
        for(int i=1;i<=n;i++){
            forwardd[i]=__gcd(forwardd[i-1],arr[i]);
        }
        for(int i=n;i>=1;i--){
            backward[i]=__gcd(backward[i+1],arr[i]);
        }
        int q;
        cin>>q;
        while(q--){
            int gc=0;
            int l,r;
            cin>>l>>r;
            gc =__gcd(forwardd[l-1],backward[r+1]);
            cout<< gc <<endl;
        }
    }
}

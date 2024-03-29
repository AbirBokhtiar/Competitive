#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
int arr[N];

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

**Bruteforce** [O(t*n + t*(q*(n+n)))] = O(t*q*n) = O(N^3) = 100^3 = 10^6

*/

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
        int q;
        cin>>q;
        while(q--){
            int gc=0;
            int l,r;
            cin>>l>>r;
            for(int i=1;i<=l-1;i++){
                gc = __gcd(gc,arr[i]);
            }
            for(int i=r+1;i<=n;i++){
                gc = __gcd(gc,arr[i]);
            }
            cout<< gc <<endl;
        }
    }
}


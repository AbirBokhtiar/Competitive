/*
# Starting with a 1-indexed array of zeros and a list of operations.
  For each operation add a value to each the array element between two given indices,inclusive.
  Once all operations have been performed, return the maximum value of the array.

 Constraints:
 3 <= n <= 10^7
 1 <= m <= 2*10^5
 1 <= a <= b <= n
 0 <= k <= 10^9

=>


***Using PrefixSum***  O(m+n+n) = O(n) = 10^7
*/
#include <bits/stdc++.h>
using namespace std;

const int N = 1e7+10;
int arr[N];

int main()
{
    int m,n;
    cin>>n>>m;
    while(m--){
        int l,r;
        long long k;
        cin>>l>>r>>k;
        arr[l]+=k;
        arr[r+1]-=k;
    }
    for(int i=1;i<=n;i++){
        arr[i]+= arr[i-1];   //prefix sum
    }
    long long mx=-1;
    for(int i=1;i<=n;i++){
        if(arr[i]>mx){
            mx=arr[i];
        }
    }
    cout<<mx<<endl;
}



/*1D Array

# Given array a of N integers. Given Q queries and in each query L and R,
  print sum of array elements from index L to R (L,R included)

 Constraints:
 1 <= N <= 10^5
 1 <= a[i] <= 10^9
 1 <= Q <= 10^5
 1 <= L, R <= N

=>
*/
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+7;
int a[N];
int preSum[N];

int main()
{
    int n;
    cin>>n;  //6
    for(int i=1;i<=n;i++){
        cin>>a[i];   //3 6 2 8 9 2
        preSum[i]= preSum[i-1] + a[i];
    }
    int Q;
    cin>>Q;  //1
    long long sum = 0;
    while(Q--){
        int l,r;
        cin>>l>>r;  //2 5
        sum = preSum[r]-preSum[l-1];
        cout<<sum<<endl;  //25
    }
}

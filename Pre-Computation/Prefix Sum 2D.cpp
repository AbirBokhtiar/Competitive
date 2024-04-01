/*2D Array

# Given 2D array a of N*N integers. Given Q queries and in each query given a,b,c,d.
  Print sum of rectangle represented by (a,b) as top left and (c,d) as bottom right point.

 Constraints:
 1 <= N <= 10^3
 1 <= a[i][j] <= 10^9
 1 <= Q <= 10^5
 1 <= a,b,c,d <= N

=>
*/
#include <bits/stdc++.h>
using namespace std;

const int N = 1e3+7;
int arr[N][N];
long long preSum[N][N];

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>arr[i][j];
            preSum[i][j]= arr[i][j]+preSum[i-1][j]+preSum[i][j-1]-preSum[i-1][j-1];
        }
    }
    int Q;
    cin>>Q;
    long long sum = 0;
    while(Q--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        sum = preSum[c][d]-preSum[a-1][d]-preSum[c][b-1]+preSum[a-1][b-1];
        cout<<sum<<endl;
    }
}
/*
Input:

3
3 6 2
8 9 2
3 4 1
2
1 1 2 2 -> 26
1 2 3 3 -> 24
*/

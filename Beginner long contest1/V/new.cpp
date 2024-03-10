#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    while(true){
        int n;
        cin >> n;
        if(n==0)break;
        priority_queue<long long int, vector<long long int>, greater<long long int>> q;

        for (int i = 0; i < n; ++i) {
            int k;
            cin >> k;
            q.push(k);
        }

        long long int sum = 0;
        while (q.size() > 1) {
            long long int a = q.top();
            q.pop();
            long long int b = q.top();
            q.pop();
            q.push(a + b);
            sum += a + b;
        }
        cout << sum << "\n";
    }
}

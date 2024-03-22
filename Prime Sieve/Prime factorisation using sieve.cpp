#include <bits/stdc++.h>
using namespace std;
const int N=1e7+10;
vector<bool> isPrime(N,1);
vector<int>lp(N,0), hp(N,0);

int main()
{
    isPrime[0]= isPrime[1]=false;
    for(int i=2;i<N;i++)
    {
        if(isPrime[i]==true)
        {
            lp[i]=hp[i]=i;
            for(int j=2*i;j<N;j+=i)
            {
                isPrime[j]=false;
                hp[j]=i;
                if(lp[j]==0)
                {
                    lp[j]=i;
                }
            }
        }
    }
    int num;
    cin>>num;
    map<int,int>primeFactors;

    while(num>1)
    {
        int primeFactor= hp[num];
        while(num%primeFactor==0)
        {
            num/=primeFactor;
            primeFactors[primeFactor]++;
        }
    }
    for(auto factor: primeFactors)
    {
        cout<<factor.first<<" multiplied "<<factor.second<<" times\n";
    }

}
/*
or,

    int num;
    cin>>num;
    vector<int> primeFactors;

    while(num>1)
    {
        int primeFactor= hp[num];
        while(num%primeFactor==0)
        {
            num/=primeFactor;
            primeFactors.push_back(primeFactor);
        }
    }
    for(auto factor: primeFactors)
    {
        cout<<factor<<" ";
    }
*/

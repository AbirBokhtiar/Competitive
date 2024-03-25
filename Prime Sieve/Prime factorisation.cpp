#include <bits/stdc++.h>
using namespace std;

//O(N)
/*
int main()
{
	int n;
	cin>>n;
	vector<int>primeFactors;
	for(int i=2;i<=n;i++)
	{
	    while(n%i==0)
	    {
		primeFactors.push_back(i);
		n/=i;
	    }
	}
	for(int prime: primeFactors)
	{ cout<<prime<<" "; }
}
*/
//O(srqt(N))

int main()
{
	int n;
	cin>>n;
	vector<int>primeFactors;
	for(int i=2;i*i<=n;i++)
	{
	    while(n%i==0)
	    {
		primeFactors.push_back(i);
		n/=i;
	    }
	}
	if(n>1) {primeFactors.push_back(n);}

	for(int prime: primeFactors)
	{ cout<<prime<<" "; }
}

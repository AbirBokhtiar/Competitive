//Recursive Method***

#include <bits/stdc++.h>
using namespace std;
const int M = 1e9+7;

int binaryExpo(int a,int b)
{
	if(b==0)return 1;
	long long res= binaryExpo(a,b/2);
	if(b&1) //b is odd
	{
		return a*(res*res);   //(a*(res*res) % M) % M
		//return a*binaryExpo(a,b-1);
	}
	else
	{
		return res*res;    //(res*res) % M
		//return binaryExpo(a*a,b/2);
	}
}

//Iterative Method***

//log(n)
int binExpoIter(int a,int b,int m)
{
	a %= m;
	int ans=1;
	while(b>0)  //while i'th bit of b exists
	{
		if(b&1) {ans=ans*a;}   //b&1= setbit on i'th pos
		//ans=(ans*1LL*a)%M;  //calculation in ll but stores in int
		a=a*a;
		//a=(a*1LL*a)%M;
		b= b>>1;
	}
	return ans;
}


//Large exponentiation*****

//If M=10^18, a= 2^1024 > 10^18 ***

//log^2(N)
//(indirect multiply using binary multiplication)

int binMultiply(long long a, long long b)
{
	int ans=0;
	while(b>0)  //while i'th bit of b exists
	{
		if(b&1) {ans= (ans+a)%M;}
		a= (a+a)%M;
		b= b>>1;
	}
	return ans;
}

int binExpoIter(int a,int b)
{
	int ans=1;
	while(b>0)  //while i'th bit of b exists
	{
		if(b&1) {ans= binMultiply(ans, a);}   //b&1= setbit on i'th pos
		a= binMultiply(a, a);
		b= b>>1;
	}
	return ans;
}

//a^b^c
int binExpoIter(int a, long long b, int M)
{
	int ans=1;
	while(b>0)  //while i'th bit of b exists
	{
		if(b&1) {ans=ans*a;}   //b&1= setbit on i'th pos
		//ans=(ans*1LL*a)%M;  //calculation in ll but stores in int
		a=a*a;
		//a=(a*1LL*a)%M;
		b= b>>1;
	}
	return ans;
}


int main()
{
	//50^64^32
	cout<<binExpoIter(50,binExpoIter(64,32,M-1),M);  //M prime
}

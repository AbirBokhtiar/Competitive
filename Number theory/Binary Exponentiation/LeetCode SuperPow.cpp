#include <bits/stdc++.h>
using namespace std;
const int M = 1e9+7;

class Sol {
public:
    long long int m=1337;
    long long int get_num(vector<int> &arr)
    {
        if(arr.size()==0)
            return 0;
        if(arr.size()==1)
            return arr[0];
        long long int temp=0;
        int cnt=1;
        for(int i=arr.size()-1;i>=0;i--)
        {
           temp+=(cnt*arr[i])%1140;
           cnt=(cnt*10)%1140;
        }
        return temp;
    }
    long long binary_expo(long long a,long long b,long long m)
    {
        if(b==0)
            return 1;
        if(b==1)
            return a;
        long long int ans=1;
        while(b)
        {
            if(1&b)
            {
                ans=(ans*a)%m;
            }
            a=(a*a)%m;
            b=b>>1;
        }
        return ans;
    }
    int superPow(int a, vector<int>& b)
    {
        long long int brr=get_num(b);
        if(brr==0)
            return 1;
        if(brr==1)
            return a;
        return binary_expo(a,brr,m);
    }
};

int main()
{
	//50^64^32
	Sol sol;
    vector<int> b = {64,32};
	cout<<sol.superPow(50,b);  //M prime
}

/*
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

int superPow(int a, vector<int> &b)
{
	int bmod=0;
	for(int val: b)
	{ bmod= (bmod*10+val)%1140;}
	return binExpoIter(a, bmod, 1337);
}

int main()
{
	//50^64^32
	cout<<binExpoIter(50,binExpoIter(64,32,M-1),M);  //M prime
}*/

/*Alternate codes for lower_bound and upper_bound functions :*/

#include <bits/stdc++.h>
using namespace std;

// lower bound
int lower_bound(vector<int>&v, int val)
{
	int l=0,h=v.size()-1;
	int mid;
	while(l<h)
	{
		mid=(l+h)/2;
		if(v[mid]<val) l=mid+1;
		else  h=mid;
	}

	if(l<v.size()-1) return l;
	else
	{
		if(val>v[l]) return -1;
		else return l;
	}


}

// upper bound
int upper_bound(vector<int> &v, int val)
{
	int l=0,h=v.size()-1;
	int mid;
	while(l<h)
	{
		mid=(l+h)/2;
		if(v[mid]<=val) l=mid+1;
		else h=mid;
	}

	if(l<v.size()-1) return l;
	else
	{
		if(val>=v[l]) return -1;
		else return l;
	}
}

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];        //4 5 5 7 8 25
    }
    cout<<endl;
    int lb=lower_bound(v,5);
    int up=upper_bound(v,25);
    cout<<lb<<" "<<up<<endl;
}

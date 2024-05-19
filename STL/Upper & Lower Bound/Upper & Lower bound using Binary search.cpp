#include <bits/stdc++.h>
using namespace std;

int lowerBound(int arr[], int len, int element)
{
    int low=0, high= len-1;
    int mid;
    while(high-low > 1)
    {
        mid= (high+low)/2;
        if(arr[mid]<element){low=mid+1;}
        else{high=mid;}
    }
    if(arr[low]>=element){return low;}
    if(arr[high]>=element){return high;}
    return -1;
}

int upperBound(int arr[], int len, int element)
{
    int low=0, high= len-1;
    int mid;
    while(high-low > 1)
    {
        mid= (high+low)/2;
        if(arr[mid]<=element){low=mid+1;}
        else{high=mid;}
    }
    if(arr[low]>element){return low;}
    if(arr[high]>element){return high;}
    return -1;
}


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];      //4 5 5 7 8 25
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int lb=lowerBound(arr,n,5);
    int ub=upperBound(arr,n,8);
    int lowB= (lb!=-1 ? arr[lb]: -1);
    int upB= (ub!=-1 ? arr[ub]: -1);
    cout<<endl;
    cout<<lb<<" "<<lowB<<endl;
    cout<<ub<<" "<<upB<<endl;
}

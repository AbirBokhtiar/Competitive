#include <bits/stdc++.h>
using namespace std;

const int N = 1e7+10;
int arr[N];

void merge(int l, int r, int mid)
{
    int lSize = mid-l+1;       //Left array size from l to mid
    int L[lSize+1];            //+1 for intMax
    int rSize = r-(mid+1)+1;   //Right array size from mid+1 to r
    int R[rSize+1];            //+1 for intMax
    for(int i=0;i<lSize;i++){
        L[i]=arr[i+l];
    }
    for(int i=0;i<rSize;i++){
        R[i]=arr[i+(mid+1)];
    }
    L[lSize]=R[rSize]=INT_MAX;  //Comparing leftover elements with INT_MAX to add
    int l_idx = 0;
    int r_idx = 0;
    for(int i=l;i<=r;i++){
        if(L[l_idx]<=R[r_idx]){
            arr[i]=L[l_idx];
            l_idx++;
        }
        else{
            arr[i]=R[r_idx];
            r_idx++;
        }
    }
}

void mergeSort(int l,int r)
{
    if(l==r)return;
    int mid = (l+r)/2;
    mergeSort(l,mid);
    mergeSort(mid+1,r);
    merge(l,r,mid);
}

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergeSort(0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

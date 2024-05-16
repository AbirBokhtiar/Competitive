#include <bits/stdc++.h>
using namespace std;

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
    cout<<endl;
    int *ptr1= lower_bound(arr,arr+n,5);
    cout<<(*ptr1)<<endl;   //5
    int *ptr2= upper_bound(arr,arr+n,5);
    cout<<(*ptr2)<<endl;   //7
    int *ptr3= lower_bound(arr,arr+n,25);
    cout<<(*ptr3)<<endl;   //25
    int *ptr4= upper_bound(arr,arr+n,25);
    cout<<(*ptr4)<<endl;   //garbage value
}

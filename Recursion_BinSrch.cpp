#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
bool BinarySearch(int arr[], int low, int high, int k)
{
    if(low<high)
        return false;
    int mid = (low+high)/2;
    if(arr[mid]==k)
        return mid;
    if(k>arr[mid])
        return BinarySearch(arr,mid+1,high,k);
    
    return BinarySearch(arr,low,mid-1,k); 
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int k;
    cin>>k;

    int low = 0,high = n-1;
    

    if(BinarySearch(arr,low,high,k))
        cout<<"FOUND";
    else    
        cout<<"NOT FOUND";

    
    return 0;
}
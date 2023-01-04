#include <bits/stdc++.h>
using namespace std;
#define ll long long

int kthSmallest(int arr[], int r, int k) 
{
    int ans;
    priority_queue<int> maxh;
        
    for(int i=0;i<=r;i++)
    {
        maxh.push(arr[i]);
        if(maxh.size()>k)
            maxh.pop();
    }
    ans = maxh.top();
    return ans;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int r,k;

    cin>>r;
    int arr[r];

    for(int i=0;i<r;i++)
    {
        cin>>arr[i];
    }

    cin>>k;
    
    cout<<kthSmallest(arr,r,k);

    return 0;
}
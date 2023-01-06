#include <bits/stdc++.h>
using namespace std;
#define ll long long

void segregateElements(int arr[],int n)
{
    int ans[n],j=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=0)
        {
            ans[j]=arr[i];
            j++;
        }
    }
        
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            ans[j]=arr[i];
            j++;
        }
    }
    memcpy(arr, ans, sizeof(ans));

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

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
    
    segregateElements(arr,n);

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void rotate(int arr[], int n)
{
    int temp;
    for(int i=n-2;i>=0;i--)
    {       
        temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;   
    }

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

    rotate(arr,n);
    return 0;
}
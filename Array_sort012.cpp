#include <bits/stdc++.h>
using namespace std;
#define ll long long

void sort012(int a[], int n)
{
    int low,mid,high, temp;
    low = 0;
    high = n-1;
    mid=0;
        
    while(mid<=high)
    {
        if(a[mid]==0)
        {
            temp = a[mid];
            a[mid] = a[low];
            a[low] = temp;
            mid++;
            low++;
        }
        else if(a[mid]==1)
        {
            mid++;
        }
        else
        {
            temp = a[mid];
            a[mid] = a[high];
            a[high] = temp;
            high--;
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    sort012(a,n);   

    return 0;
}
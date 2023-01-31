#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<int> find(int arr[],int n, int x)
{
    int low=0;
    int high = n-1;
    int mid=0;
    
    int first=-1,last=-1;
    vector<int> ans;
    //  mid = (low+high)/2;
    while(low<=high)
    {   
        mid = (low+high)/2;
        if(arr[mid]==x)
        {
        
           first=mid;
           last=mid;
           
           while(arr[mid]==arr[mid+1] && mid!=n-1)
           {
               mid++;
               last=mid;
           }
           
           while(arr[mid]==arr[mid-1] && mid!=0)
           {
               mid--;
               first=mid;
           }
           ans.push_back(first);
           ans.push_back(last);
           return ans;
        }
        else if(x>arr[mid])
            low = mid+1;
        else
            high=mid-1;
    }
    ans.push_back(first);
    ans.push_back(last);
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,x;
    cin>>n>>x;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    vector<int> ans = find(arr,n,x);
    cout<<ans[0]<<" "<<ans[1];
    
    

    return 0;
}
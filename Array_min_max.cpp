#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<ll, ll> getMinMax(ll a[], int n) {
    ll mn,mx;
    mn = a[0];
    mx = a[0];
    
    pair<ll,ll> ans;
    for(int i=0;i<n;i++)
    {
        if(a[i] < mn)
            mn = a[i];
            
        if(a[i]>mx)
            mx = a[i];
    }
    ans = {mn,mx};
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    ll a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    pair<ll,ll> ans = getMinMax(a,n);
    cout<<ans.first<<" "<<ans.second;


    return 0;
}
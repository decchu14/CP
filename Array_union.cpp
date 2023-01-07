#include <bits/stdc++.h>
using namespace std;
#define ll long long

int doUnion(int a[], int n, int b[], int m)  
{
    set<int> ans;
    for(int i=0;i<n;i++)
    {
        ans.insert(a[i]);
    }
    for(int i=0;i<m;i++)
    {
        ans.insert(b[i]);
    }        
    return ans.size();
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n>>m;

    int a[n],b[m];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }

    cout<<doUnion(a,n,b,m);
    return 0;
}
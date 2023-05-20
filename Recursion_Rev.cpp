#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
void rev(int n)
{
   if(n==0)
        return;

    cout<<n%10;
    return rev(n/10);
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    rev(n);

    
    return 0;
}
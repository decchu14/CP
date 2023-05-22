#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int digitSum(int n)
{
   
    if(n==0)
        return 0;
    
    return (n%10)+digitSum(n/10);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    cout<<digitSum(n);

    
    return 0;
}
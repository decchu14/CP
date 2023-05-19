#include <bits/stdc++.h>
using namespace std;
#define ll long long

void NToOne(int n)
{
    //base condition
   if(n==1)
   {
    cout<<n<<" ";
    return;
   }

 // induction
   cout<<n<<" ";
   //hypothesis
   NToOne(n-1);
   
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;


    NToOne(n);
    return 0;
}
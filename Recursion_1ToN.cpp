#include <bits/stdc++.h>
using namespace std;
#define ll long long

void OneToN(int n)
{
    //base condition
   if(n==1)
   {
    cout<<n<<" ";
    return;
   }

   //hypothesis
   OneToN(n-1);
    //induction
   cout<<n<<" ";
    
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;


    OneToN(n);
    return 0;
}
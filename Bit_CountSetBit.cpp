#include <bits/stdc++.h>
using namespace std;
#define ll long long

int setBits(int N) 
{
   int bits=0;
    int b;
   while(N>0)
   {
        b=N>>1;
        if(b)
            bits++;
        N=N/2;

   }
   return bits; 
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    
    int N;
    cin>>N;


    cout<<setBits(N);
    

    return 0;
}
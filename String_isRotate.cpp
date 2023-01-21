#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool areRotations(string s1,string s2)
{
    int s1_len = s1.length();
    int s2_len = s2.length();
   
    s1 = s1+s1;
    if(s1_len!=s2_len)
        return false;

    for(int i=0;i<s1_len;i++)
    {
        if(s2 == s1.substr(i,s1_len))
            return true;
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s1,s2;
    cin>>s1;
    cin>>s2;

    cout<<areRotations(s1,s2);
    return 0;
}
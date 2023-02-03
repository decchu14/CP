#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int isPalindrome(string S)
{	    
    int last = S.length()-1;
    int first = 0;
	    
    while(first<last)
	{
        if(S[first] != S[last])
	        return 0;
	           
	    first++;
	    last--;
	}
	    
	return 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin>>str;

    cout<<isPalindrome(str);

    
    return 0;
}
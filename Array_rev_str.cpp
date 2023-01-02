#include <bits/stdc++.h>
using namespace std;
#define ll long long

string reverseWord(string str){
    
  int start = 0;
  int end = str.length()-1;
  char temp;
  while(start<end)
  {
      temp = str[start];
      str[start] = str[end];
      str[end] = temp;
      start++;
      end--;
  }
  return str;
  
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin>>str;
    cout<<reverseWord(str);

    return 0;
}
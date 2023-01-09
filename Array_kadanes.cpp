#include <bits/stdc++.h>
using namespace std;
#define ll long long

long long maxSubarraySum(int arr[], int n){  
    long long max_sum = INT_MIN;
    long long current_sum = 0;
    for (long long i = 0; i < n; i++)
    {
        current_sum += arr[i];
        max_sum = max(max_sum, current_sum);
        if (current_sum < 0)
            current_sum = 0;
        }
        return max_sum;
    }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    return 0;
}
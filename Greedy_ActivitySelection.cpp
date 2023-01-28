#include <bits/stdc++.h>
using namespace std;
#define ll long long

int maxMeetings(int start[], int end[], int n)
{
    pair<int,int> times[n];
    for(int i=0;i<n;i++)
    {
        times[i]={start[i],end[i]};
    }

    sort(times,times+n);

    int count=1;

    int r = times[0].second;

    for(int i=1;i<n;i++)
    {
        if(times[i].first<=r)
        {
            if(r>times[i].second)
                r=times[i].second; 
        }
        else{
            count++;
            r=times[i].second;
        }
    }
    return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    
    int n;
    cin>>n;

    int start[n],end[n];
    for(int i=0;i<n;i++)
    {
        cin>>start[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>end[i];
    }

    cout<<maxMeetings(start,end,n);
    

    return 0;
}
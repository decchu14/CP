#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c)
{
    int top = 0;
        int down = r-1;
        int left = 0;
        int right = c-1;
        
        vector<int> ans;
        
        int dir = 0;
        
        while(top<=down && left<=right)
        {
            if(dir==0)
            {
                for(int i=left;i<=right;i++)
                {
                    ans.push_back(matrix[top][i]);
                }
                top++;
            }
            else if(dir==1)
            {
                for(int i=top;i<=down;i++)
                {
                    ans.push_back(matrix[i][right]);
                }
                right--; 
            }
            else if(dir==2)
            {
                for(int i=right;i>=left;i--)
                {
                    ans.push_back(matrix[down][i]);
                }
                down--;   
            }
            else if(dir==3)
            {
                for(int i=down;i>=top;i--)
                {
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
            dir = (dir+1)%4;
        }
        return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int c,r;
    cin>>c>>r;

    int ele;
    vector<vector<int>> matrix;
    vector<int> ans;

    for(int i=0;i<r;i++)
    {
      vector<int> temp;
      for(int j=0;j<c;j++)
      {
        cin>>ele;
        temp.push_back(ele);
      }
      matrix.push_back(temp);
     
    }

    ans = spirallyTraverse(matrix, r,c);

    for(int i=0;i<r;i++)
    {
        cout<<ans[i]<<" ";
      
      
    }
    

    return 0;
}
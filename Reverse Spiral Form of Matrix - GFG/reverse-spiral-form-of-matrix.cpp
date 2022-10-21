//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
 public:
      vector<int> reverseSpiral(int R, int C, vector<vector<int>>&a)  {
         vector<int> ans;
        int curRow=0,curCol=0;
        int i=0;
        while(curRow<R and curCol<C)
        {
            for(i=curCol;i<C;i++)
            ans.push_back(a[curRow][i]);
            curRow++;
            for(i=curRow;i<R;i++)
            ans.push_back(a[i][C-1]);

            C--;
            if(curRow<R)
            {
                for(i=C-1;i>=curCol;i--)
                ans.push_back(a[R-1][i]);

                R--;
            }
            if(curCol<C)
            {
                for(i=R-1;i>=curRow;i--)
                ans.push_back(a[i][curCol]);

                curCol++;
            }

        }
        reverse(begin(ans),end(ans));
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int R, C;
        cin>>R>>C;
        vector<vector<int>> a(R, vector<int>(C, 0));
        for(int i = 0;i < R*C;i++)
            cin>>a[i/C][i%C];
        Solution ob;
        vector<int>ans=ob.reverseSpiral(R,C,a);
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
            cout<<endl;
    }
    return 0;
}

// } Driver Code Ends
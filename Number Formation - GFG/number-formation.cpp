//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {

 public:
    int getSum(int x, int y, int z)
    {
        long long getNumExact[x + 1][y + 1][z + 1];
        memset(getNumExact, 0, sizeof getNumExact);
        long long getSumExact[x + 1][y + 1][z + 1];
        memset(getSumExact, 0, sizeof getSumExact);
        long long ans = 0;
        getNumExact[0][0][0] = 1;
        int modular = (int)(1e9 + 7);
        for (int i = 0; i <= x; ++i)
        {
            for (int j = 0; j <= y; ++j)
            {
                for (int k = 0; k <= z; ++k)
                {
                    if (i > 0)
                    {
                        getSumExact[i][j][k] += (getSumExact[i - 1][j][k] * 10 + 4 * getNumExact[i - 1][j][k]) % modular;
                        getNumExact[i][j][k] += getNumExact[i - 1][j][k] % modular;
                    }
                    if (j > 0)
                    {
                        getSumExact[i][j][k] += (getSumExact[i][j - 1][k] * 10 + 5 * getNumExact[i][j - 1][k]) % modular;
                        getNumExact[i][j][k] += getNumExact[i][j - 1][k] % modular;
                    }
                    if (k > 0)
                    {
                        getSumExact[i][j][k] += (getSumExact[i][j][k - 1] * 10 + 6 * getNumExact[i][j][k - 1]) % modular;
                        getNumExact[i][j][k] += getNumExact[i][j][k - 1] % modular;
                    }
                    ans += getSumExact[i][j][k] % modular;
                    ans %= modular;
                }
            }
        }
        return (int)ans;
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    while (t--) {
        int x, y, z;
        cin >> x >> y >> z;

        Solution ob;
        cout << ob.getSum(x, y, z) << "\n";
    }
    return 0;
}

// } Driver Code Ends
//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
       
       int x = n;
       int ld=0,d=0;
       int count = 0;
       
       while(x>0)
       {
           ld = x%10;
           count = count + (ld*ld*ld);
           x = x/10;
       }
       if (count == n)
        return "Yes";
        else 
        return "No";
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends
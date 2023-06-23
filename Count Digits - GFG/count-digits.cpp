//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int evenlyDivides(int N){
        
        int m = N;
        int lDigit = 0;
        int count =0;
        while(m>0)
        {
            lDigit = m % 10;
            if (lDigit !=0)
            if(N % lDigit == 0)
            {
                ++count;
            }
            m = m/10;
        }
        
        return count;
        
        
        
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends
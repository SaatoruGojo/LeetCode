class Solution {
public:
    int missingNumber(vector<int>& a) 
    {
       int n=a.size();
        int sum2=0;
        int sum1 = n*(n+1)/2;
       for(int i=0;i<n;++i)
           sum2 = sum2 + a[i];
       return (sum1 - sum2);
        

    }
};
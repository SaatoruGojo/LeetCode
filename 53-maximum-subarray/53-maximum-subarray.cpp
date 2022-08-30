class Solution {
public:
    int maxSubArray(vector<int>& a) 
    {   int res = a[0];
        int maxEnd = a[0];
        int n = a.size();
        for(int i=1;i<n;++i)
        {
           maxEnd=max(maxEnd + a[i],a[i]);
            res = max(res, maxEnd);
        }
     return res;
    }
};
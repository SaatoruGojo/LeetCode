class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {   int curr = 0;
        int maxtill = nums[0];
        int n = nums.size();
        for(int i=0;i<n;++i)
        {
            curr = curr + nums[i];
            maxtill = max(curr,maxtill);
            if(curr<0)
                curr=0;
        }
     return maxtill;
    }
};
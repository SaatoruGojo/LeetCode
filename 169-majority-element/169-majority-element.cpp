class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int n=nums.size();
        int count = 1;
        int res =0;
        for(int i=0;i<n;++i)
        {
            if(nums[res]==nums[i])
                ++count;
            else
                --count;
            if(count == 0)
            {
                res = i;
                count = 1;
            }
        }
        return nums[res];
        
    }
};
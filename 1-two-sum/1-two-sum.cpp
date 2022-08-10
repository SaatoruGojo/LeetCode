class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> f;
       for(int i=0;i<n;i++)
        {
            int k=target-nums[i];
            for(int j=i+1;j<n;j++)
            {
                if(nums[j]==k)
                {
                    f.push_back(i);
                    f.push_back(j);
                    break;
                }
            }
            if(f.size()==2)
                break;
        }
        return f;
    }
};
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int sum = 0;
        if (nums.size() <= 1) 
            return 0;
        for (int i = 1; i < nums.size(); i++) 
        {
            sum += nums[i];
        }
        
        int leftSum = 0;
        int rightSum = sum;
        
        for (int i = 0; i < nums.size() - 1; i++) 
        {
            if (leftSum == rightSum) 
                return i;
            leftSum += nums[i];
            rightSum -= nums[i + 1];
            if (leftSum == rightSum) 
                return i+1;
        }
        return -1;
        
    }
};